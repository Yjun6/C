#include"lcd.h"    //<stdio.h>  "lcd.h" 本质区别就是编译的时候头文件的查找路径不同
#include"word.h"

//全局变量,屏幕的文件描述符
int fd = 0;
//全局变量,映射后的地址
int *plcd = NULL;

//函数的实现

//初始化屏幕
void lcd_init()
{
    //1.打开屏幕文件
    fd = open("/dev/fb0",O_RDWR); 
    if(fd == -1)
    {
        printf("open failed!\n");
        return;
    }
    //2.把屏幕映射到内存
    plcd = mmap(NULL, 800*480*4, PROT_READ | PROT_WRITE, MAP_SHARED,fd,0);
    if(plcd == MAP_FAILED)
    {
        printf("mmap failed!\n");
        return;
    }
    printf("init lcd success!\n");
}

//关闭屏幕
void lcd_close()
{
    //解映射 
    munmap(plcd, 800*480*4);    
    //关闭屏幕文件
    close(fd);
}

//可以在LCD屏幕上指定的位置(x,y)显示一个指定颜色(color)的点
void lcd_draw_point(int x,int y,int color)
{
    if(x<0 || x>=800 || y<0 || y>=480)
    {
        printf("bro,you point out of the screen!\n");
        return;
    }
    *(plcd+800*y+x) = color;
}

//把lcd刷成指定的颜色
void lcd_clear(int color)
{
    int x,y;
    //把每一个点都变为color函数,就是刷屏
    for(y=0;y<480;y++)  //有480行
    {
        for(x=0;x<800;x++) //每一行有800个点
        {
            //通过plcd操作屏幕
            lcd_draw_point(x,y,color);
        }
    }
}

//在LCD指定的位置显示一个指定大小,指定颜色的矩形
void lcd_draw_rect(int x0,int y0,int w,int h,int color)
{
    int x,y;
    //把每一个点都变为color函数,就是刷屏
    for(y=y0;y<y0+h;y++)  //有480行
    {
        for(x=x0;x<x0+w;x++) //每一行有800个点
        {
            //通过plcd操作屏幕
            lcd_draw_point(x,y,color);
        }
    }
}

//在LCD指定的位置显示一个指定半径,指定颜色的圆
void lcd_draw_cir(int x0,int y0,int r,int color)
{
    int x,y;
    //把每一个点都变为color函数,就是刷屏
    for(y=y0-r;y<y0+r;y++)  
    {
        for(x=x0-r;x<x0+r;x++) 
        {
            //通过plcd操作屏幕
            if((x-x0)*(x-x0) + (y-y0)*(y-y0) <= r*r)
            {
                lcd_draw_point(x,y,color);
            }
        }
    }
}

//这个函数就可以把指定的图片显示到指定的位置
void lcd_draw_bmp(char *name,int x0,int y0)
{
    //显示图片
    //a.打开图片文件
    int fd_bmp = open(name,O_RDWR);   //打开的文件名
    if(fd_bmp == -1)
    {
        printf("open bmp error!\n");
        return;
    }
    //b.读取图片的像素信息
    char buf[800*480*4+54] = {0};
    read(fd_bmp,buf,800*480*4+54);
    //c.关闭文件 
    close(fd_bmp);

    //获取图片的宽和高
    int w = buf[21]<<24 | buf[20]<<16 | buf[19]<<8 | buf[18];
    int h = buf[25]<<24 | buf[24]<<16 | buf[23]<<8 | buf[22];
    printf("name = %s,w = %d,h = %d\n",name,w,h);

    //d.解析并且显示图片中的像素信息
    int x,y;
    char a=0,r,g,b;
    int color;
    int p = 54;
    for(y=h-1;y>=0;y--) //图片有h行
    {
        for(x=0;x<w;x++) //每一行有w个点
        {
            //得到每一个点的颜色并且显示
            b = buf[p++];
            g = buf[p++];
            r = buf[p++];
            color = a << 24 | r<<16 | g<<8 | b;
            lcd_draw_point(x+x0,y+y0,color);
        }
        //跳过填充字节
        if((w*3)%4 != 0)
        {
            p = p+4-(w*3)%4;
        }
    }
}

//调用这个函数就可以显示指定的文字到指定的位置
void lcd_darw_word(char *word,int x0,int y0,int w,int h,int color)
{
    int i,x,y;
    for(y=0;y<h;y++) //文字有h行
    {
        for(x=0;x<(w/8);x++) //每一行有w/8个字节
        {
            //解析word[y*(w/8)+x]对应的8个bit位    
            for(i=7;i>=0;i--)
            {
                if(word[y*(w/8)+x] & (1<<i))  //这个bit为1
                {
                    //应该显示一个点
                    lcd_draw_point(8*x+7-i + x0,y + y0,color);  //字的颜色
                }
            }
        }
    }
}

//可以在指定的位置显示一个指定的4位以内的数字(方便后续显示分数)
void lcd_draw_num(int num,int x0,int y0,int color)
{
    //分离出num的每一个数字位
    int a,b,c,d;
    a = num/1000;
    b = (num%1000)/100;
    c = (num%100)/10;
    d = num%10;

    if(num>=1000)
    {
        lcd_darw_word(dig[a],x0,y0,32,64,color);
        lcd_darw_word(dig[b],x0+32,y0,32,64,color);
        lcd_darw_word(dig[c],x0+64,y0,32,64,color);
        lcd_darw_word(dig[d],x0+96,y0,32,64,color);
    }else if(num >=100)
    {
        lcd_darw_word(dig[b],x0,y0,32,64,color);
        lcd_darw_word(dig[c],x0+32,y0,32,64,color);
        lcd_darw_word(dig[d],x0+64,y0,32,64,color);
    }else if(num >= 10)
    {
        lcd_darw_word(dig[c],x0,y0,32,64,color);
        lcd_darw_word(dig[d],x0+32,y0,32,64,color);
    }else 
    {
        lcd_darw_word(dig[d],x0,y0,32,64,color);
    }

}

//可以获取触摸屏的点击位置信息
int get_touch()
{
    //获取触摸点的坐标
    //1.打开触摸屏文件
    int fd_touch = open("/dev/input/event0",O_RDWR);
    if(fd_touch == -1)
    {
        printf("open failed!\n");
        return -1;
    }
    //2.读取输入事件
    int x,y;
    struct input_event ev;//定义一个变量,保存当前的输入信息

    while(1) //只要你的手指没有离开屏幕,就会一直产生输入事件
    {
        read(fd_touch,&ev,sizeof(ev)); //当没有数据可读的时候,就会停在这里
        //3.解析输入事件
        if(ev.type == EV_ABS && ev.code == ABS_X)
        {
            x = ev.value; //更新x
        }
        if(ev.type == EV_ABS && ev.code == ABS_Y)
        {
            y = ev.value; //更新y
        }
        //手指离开屏幕,就退出循环
        if(ev.type == EV_KEY && ev.code == BTN_TOUCH && ev.value == 0)
        {
            break;
        }
    }
    //4.关闭触摸屏
    close(fd_touch);
    //打印当前获取的坐标
    x = x/1.28;
    y = y/1.25;
    printf("x = %d,y = %d\n",x,y);

    if(x>=0 && x<=150 && y>=0 && y<=100)
    {
        return 1;
    }else if(x>=650 && x<=800 && y>=0 && y<=100)
    {
        return 2;
    }else 
    {
        return 0;
    }

}

//可以获取触摸的滑动方向
int get_dec()
{
    //获取触摸点的坐标
    //1.打开触摸屏文件
    int fd_touch = open("/dev/input/event0",O_RDWR);
    if(fd_touch == -1)
    {
        printf("open failed!\n");
        return -1;
    }
    //2.读取输入事件
    int x0=-1,y0=-1;
    int x,y;
    struct input_event ev;//定义一个变量,保存当前的输入信息

    while(1) //只要你的手指没有离开屏幕,就会一直产生输入事件
    {
        read(fd_touch,&ev,sizeof(ev)); //当没有数据可读的时候,就会停在这里
        //3.解析输入事件
        if(ev.type == EV_ABS && ev.code == ABS_X)
        {
            if(x0 == -1)
            {
                x0 = ev.value;  
            }
            x = ev.value; //更新x
        }
        if(ev.type == EV_ABS && ev.code == ABS_Y)
        {
            if(y0 == -1)
            {
                y0 = ev.value;  
            }
            y = ev.value; //更新y
        }
        //手指离开屏幕,就退出循环
        if(ev.type == EV_KEY && ev.code == BTN_TOUCH && ev.value == 0)
        {
            break;
        }
    }
    //4.关闭触摸屏
    close(fd_touch);
    //打印当前获取的坐标
    printf("x0 = %d,y0 = %d\n",x0,y0);
    printf("x = %d,y = %d\n",x,y);

    if(y<y0  && abs(y-y0) > abs(x-x0))
    {
        printf("UP\n");
        return 1; //返回1表示向上
    }else if(y>y0  && abs(y-y0) > abs(x-x0))
    {
        printf("down\n");
        return 2; //返回1表示向下
    }else if(x<x0 && abs(y-y0) < abs(x-x0))
    {
        printf("left");        return 3;
    }else if(x>x0 && abs(y-y0) < abs(x-x0))
    {
        return 4;
    }

    return 0;
}