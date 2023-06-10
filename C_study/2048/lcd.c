#include"lcd.h"    //<stdio.h>  "lcd.h" 本质区别就是编译的时候头文件的查找路径不同
#include"word.h"

//全局变量,屏幕的文件描述符
int fd = 0;
//全局变量,映射后的地址
int *plcd = NULL;

int flags=0;
//游戏的主体数组
int num[4][4] = {0};

//存储图片数组
char bmp[12][20] = {{"00.bmp"},{"01.bmp"},{"02.bmp"},{"03.bmp"},{"04.bmp"},{"05.bmp"},
                    {"06.bmp"},{"07.bmp"},{"08.bmp"},{"09.bmp"},{"010.bmp"},{"011.bmp"}};
//辅助拿到历史最高分
char buf1[128] = {0};

//保存游戏前一步的数组内容
int num_old[4][4] = {0};

//当前分数
double score=0;
//函数的实现

//调试专用
void func1(){
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d  ",num[i][j]);
        }
    }
}

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
void lcd_draw_word(char *word,int x0,int y0,int w,int h,int color)
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

//可以在指定的位置显示一个指定的5位以内的数字(方便后续显示分数)
void lcd_draw_num(int num,int x0,int y0,int color)
{
    //分离出num的每一个数字位
    int a,b,c,d,e;
    e = num/10000;
    a = (num%10000)/1000;
    b = (num%1000)/100;
    c = (num%100)/10;
    d = num%10;

    if(num>=10000)
    {
        lcd_draw_word(dig[e],x0,y0,16,21,color);
        lcd_draw_word(dig[a],x0+16,y0,16,21,color);
        lcd_draw_word(dig[b],x0+32,y0,16,21,color);
        lcd_draw_word(dig[c],x0+48,y0,16,21,color);
        lcd_draw_word(dig[d],x0+64,y0,16,21,color);
    }else if(num>=1000)
    {
        lcd_draw_word(dig[a],x0,y0,16,21,color);
        lcd_draw_word(dig[b],x0+16,y0,16,21,color);
        lcd_draw_word(dig[c],x0+32,y0,16,21,color);
        lcd_draw_word(dig[d],x0+48,y0,16,21,color);
    }else if(num >=100)
    {
        lcd_draw_word(dig[b],x0,y0,16,21,color);
        lcd_draw_word(dig[c],x0+16,y0,16,21,color);
        lcd_draw_word(dig[d],x0+32,y0,16,21,color);
    }else if(num >= 10)
    {
        lcd_draw_word(dig[c],x0,y0,16,21,color);
        lcd_draw_word(dig[d],x0+16,y0,16,21,color);
    }else 
    {
        lcd_draw_word(dig[d],x0,y0,16,21,color);
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

        if (x >= 100 && x <= 160 && y >= 100 && y <= 160)//游戏主图标
    {
        return 1;
    }
    else if (x >= 350 && x <= 450 && y >= 280 && y <= 315)//开始游戏
    {
        return 2;
    }
    else if (x >= 350 && x <= 450 && y >= 350 && y <= 380)//历史最高分
    {
        return 3;
    }
    else if (x >= 350 && x <= 450 && y >= 420 && y <= 460)//退出游戏
    {
        return 4;
    }else if (x >= 475 && x <= 510 && y >= 140 && y <= 180)//历史最高分
    {
        return 5;
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
    x = x/1.28;
    y = y/1.25;
    x0 = x0/1.28;
    y0 = y0/1.25;
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
    }else if(x == x0 && y == y0 )
    {
        if(x >= 700 && x <= 760 && y >= 300 && y <= 360)
        {
            return 5;
        }else if(x >= 700 && x <= 760 && y >= 380 && y <= 440)
        {
            return 6;
        }else if(x >= 700 && x <= 760 && y >= 220 && y <= 280)
        {
            return 7;
        }
    }
    return 0;
}

//在数组随机的空白位置产生一个随机的2或者4
void add_num()
{
    int n = rand() % (16 - size());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (num[i][j] == 0 && n-- == 0)
            {
                num[i][j] = rand() % 2 ? 4 : 2;
                return;
            }
        }
    }
}


//根据数组中的内容,需要把游戏界面展示出来(界面其实就是16张图片)
void draw_game()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[i][j] == 0)
            {
                //无数字生成
                lcd_draw_bmp(bmp[0],280+60*j,80+60*i);
            }else if(num[i][j] == 2)
            {
                lcd_draw_bmp(bmp[1],280+60*j,80+60*i);
            }else if(num[i][j] == 4)
            {
                lcd_draw_bmp(bmp[2],280+60*j,80+60*i);
            }else if(num[i][j] == 8)
            {
                lcd_draw_bmp(bmp[3],280+60*j,80+60*i);
            }else if(num[i][j] == 16)
            {
                lcd_draw_bmp(bmp[4],280+60*j,80+60*i);
            }else if(num[i][j] == 32)
            {
                lcd_draw_bmp(bmp[5],280+60*j,80+60*i);
            }else if(num[i][j] == 64)
            {
                lcd_draw_bmp(bmp[6],280+60*j,80+60*i);
            }else if(num[i][j] == 128)
            {
                lcd_draw_bmp(bmp[7],280+60*j,80+60*i);
            }else if(num[i][j] == 256)
            {
                lcd_draw_bmp(bmp[8],280+60*j,80+60*i);
            }else if(num[i][j] == 512)
            {
                lcd_draw_bmp(bmp[9],280+60*j,80+60*i);
            }else if(num[i][j] == 1024)
            {
                lcd_draw_bmp(bmp[10],280+60*j,80+60*i);
            }else if(num[i][j] == 2048)
            {
                lcd_draw_bmp(bmp[11],280+60*j,80+60*i);
            }
        }
    }

}


//判断游戏是否可以继续进行,如果可以继续,就返回1,否则返回0
int check_over()
{
    //如果二维数组中,有空白位置或者有相邻相等的数字,则游戏可以继续
    if(size() < 16)
    {
        return 1;
    }
    //判断是否有相邻相等的数字
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j<3)
            {
                if(num[i][j] == num[i][j+1])
                {
                    return 1;
                }
            }

            if(i<3)
            {
                if(num[i][j] == num[i+1][j])
                {
                    return 1;
                }
            }
        }
    }

    //数组满员，没有相邻相等的数字
    return 0;
}

//按照上滑的逻辑处理二维数组中的所有数据
//返回一个标志,表示此次滑动是否产生了移动或者合并(因为存在移动或者合并的时候,就应该添加一个新数字)
int move_up()
{
    int i;
    for (i = 0; i < 4; ++i) {
        int j, k;
        for (j = 1, k = 0; j < 4; ++j) {
            if (num[j][i] > 0) {
                if (num[k][i] == num[j][i]) {
                    score += num[k++][i] *= 2;
                    num[j][i] = 0;
                    flags = 1;
                }
                else if (num[k][i] == 0) {
                    num[k][i] = num[j][i];
                    num[j][i] = 0;
                    flags = 1;
                }
                else {
                    num[++k][i] = num[j][i];
                    if (j != k) {
                        num[j][i] = 0;
                        flags = 1;
                    }
                }
            }
        }
    }
    return 0;
}

//按照下滑的逻辑处理二维数组中的所有数据
int move_down() {
    /* 仿照左移操作，区别仅仅是行列互换后遍历，且j和k都反向遍历 */
    int i;
    for (i = 0; i < 4; ++i) {
        int j, k;
        for (j = 2, k = 3; j >= 0; --j) {
            if (num[j][i] > 0) {
                if (num[k][i] == num[j][i]) {
                    score += num[k--][i] *= 2;
                    num[j][i] = 0;
                    flags = 1;
                }
                else if (num[k][i] == 0) {
                    num[k][i] = num[j][i];
                    num[j][i] = 0;
                    flags = 1;
                }
                else {
                    num[--k][i] = num[j][i];
                    if (j != k) {
                        num[j][i] = 0;
                        flags = 1;
                    }
                }
            }
        }
    }
    return 0;
}

int move_left()
{
    for (int i = 0; i < 4; i++)
    {
        int j, k;
        for (j = 1, k = 0; j < 4; j++)
        {
            if (num[i][j] > 0)
                /* 找出k后面第一个不为空的项，下标为j，之后分三种情况 */
            {
                if (num[i][k] == num[i][j])
                {
                    /* 情况1：k项和j项相等，此时合并方块并计分 */
                    score += num[i][k++] *= 2;
                    num[i][j] = 0;
                    flags = 1;
                }
                else if (num[i][k] == 0)
                {
                    /* 情况2：k项为空，则把j项赋值给k项，相当于j方块移动到k方块 */
                    num[i][k] = num[i][j];
                    num[i][j] = 0;
                    flags = 1;
                }
                else
                {
                    /* 情况3：k项不为空，且和j项不相等，此时把j项赋值给k+1项，相当于移动到k+1的位置 */
                    num[i][++k] = num[i][j];
                    if (j != k)
                    {
                        /* 判断j项和k项是否原先就挨在一起，若不是则把j项赋值为空（值为0） */
                        num[i][j] = 0;
                        flags = 1;
                    }
                }
            }
        }
    }
    return 0;
}

//右
int move_right()
{
    int i;
    for (i = 0; i < 4; ++i) {
        int j, k;
        for (j = 2, k = 3; j >= 0; --j) {
            if (num[i][j] > 0) {
                if (num[i][k] == num[i][j]) {
                    score += num[i][k--] *= 2;
                    num[i][j] = 0;
                    flags = 1;
                }
                else if (num[i][k] == 0) {
                    num[i][k] = num[i][j];
                    num[i][j] = 0;
                    flags = 1;
                }
                else {
                    num[i][--k] = num[i][j];
                    if (j != k) {
                        num[i][j] = 0;
                        flags = 1;
                    }
                }
            }
        }
    }
    return 0;
}

//数字转字符串
char tmp1[128];
int n=0;
void func(int tmp)
{
    if(tmp == 0)
        return;
    
    func(tmp/10);
    tmp1[n] = (tmp%10)+'0';
    n++;
}

//保存历史最高分
void max(int tmp)
{
    func(tmp);
  
    //1.打开屏幕文件
    int fd = open("1.txt",O_RDWR); 
    if(fd == -1)
    {
        printf("open failed!\n");
        return ;
    }

    //重新定位光标位置
    lseek(fd,0,SEEK_SET);

    //读写文件
    //写入数据
    // int res = write(fd,tmp1,128);
    char buf10[5]={0};
    // write(fd,buf10,sizeof(buf10[5]));
    write(fd,tmp1,5);

     //重新定位光标位置
    lseek(fd,0,SEEK_SET);
    //sprintf(buf10,"%d",tmp);
    //printf("res::%d\n",res);
    //printf("max::tmp1::%d\n",tmp);
    //关闭文件

    close(fd);
    return;
}

//开始屏幕界面
int  menu() {
    lcd_clear(0x00FFFFFF);
    lcd_draw_bmp("mainmenu.bmp", 280, 0);//主菜单页面
    while (1)
    {
        int y = get_touch();
        if (y==4)//退出游戏
        {
            return 0;
        }
        else if (y==2)//开始游戏
        {
            return 1;
        }
        else if (y==3)//查看历史最高分
        {
            return 2;
        }
    }
}
//数组已有内容大小
int size()
{
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[i][j] != 0)
                count++;
        }
    }
    return count;
}
//从文件拿到历史最高分
int chu_max()
{
    char buf2[128] = {0};
    //打开屏幕文件
    int fd = open("1.txt",O_RDWR); 
    if(fd == -1)
    {
        printf("open failed!\n");
        return -1;
    }
    printf("++++++++++\n");
    lseek(fd,0,SEEK_SET);
    int n = read(fd, buf2, 5);
     //重新定位光标位置
    lseek(fd,0,SEEK_SET);
    //关闭屏幕文件
    close(fd);
    printf("chu_max::%s\n",buf2);

    //buf2
    int tmp=0;
    // while(*buf2 != NULL)
    // {
    //     tmp = tmp*10 +(*buf2-'0');
    //     buf2++;
    // }
    for(int i=0;i<n;i++){
        //tmp+=(buf2[i]-'0')*(pow(10,n-i-1));
        tmp = tmp*10 +(buf2[i]-'0');
    }

    return tmp;
}
//显示小组成员
void lcd_name()
{
    int x = 0;

    lcd_draw_rect(0, 445, 800, 35, 0x00FFFFFF);
    for (int i = 0; i < 16; i++)
    {
        lcd_draw_word(word[i], x, 448, 32, 29,0x00ef7eb5);
        x = (x+42) % 800;
    }
}
//达到最高分 出现恭喜界面
void menu1()
{
    lcd_clear(0x00FFFFFF);
    lcd_draw_bmp("high.bmp", 280, 0);
    sleep(3);
    lcd_clear(0x00FFFFFF);
}
//使用全局数组保存
void old()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            num_old[i][j] = num[i][j];
        }
    }
}
//游戏结束 重新开始
int menu2() {
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            num[i][j] = 0;
            num_old[i][j] = 0;
        }
    }
    //比较历史最高分和当前分数
    int ret = comp();
    if(ret == 1)
    {
        //当前分数高
        //保存历史最高分
        max(score);
    }else{
        //历史分数更高

    }
    score = 0;

    lcd_clear(0x00FFFFFF);
    lcd_draw_bmp("ending.bmp", 280, 0);//主菜单页面
    while (1)
    {
        int z = get_touch();
        if (z == 4)//退出游戏
        {
            return 0;
        }
        else if (z == 2)//重新开始游戏
        {
            
            return 1;
        }
        else if (z == 3)//查看历史最高分
        {
            // //从文件拿到历史最高分
            // int chu_max();
            menu3();
            return 2;
        }
    }
}

//查看历史最高分
void menu3()
{
    lcd_clear(0x00FFFFFF);
    lcd_draw_bmp("history.bmp", 280, 100);

    printf("menu3::%d\n",chu_max());
    //从文件拿到历史最高分
    lcd_draw_num(chu_max(),380,270,0x000088);

    while (1)
    {
        int a = get_touch();
        if (a == 5)
        {
            break;
        }
    }
}

//显示当前分数
void showScore()
{
    //在LCD指定的位置显示一个指定大小,指定颜色的矩形
    lcd_draw_rect(580,50,200,150,0x00ffffff);
    for(int i=0;i<5;i++)
    {
        //显示指定的文字到指定的位置
        lcd_draw_word(word_[i],580+i*25,50,24,21,0x00ef7eb5);
    }
    lcd_draw_num(score,700,50,0x00ef7eb5);
}


//比较当前分数和历史最高分
int comp()
{
    //拿到历史最高分
    int tmp = chu_max();
    
    if(score > tmp)
        return 1;
    else
        return 0;
}

//撤回
void recall()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            num[i][j] = num_old[i][j];
        }
    }
    printf("recall\n");
}
void recover()
{
    for(int i=0;i<4;i++)
         {
            for(int j=0;j<4;j++)
            {
                num[i][j]=0;
            }
         }  
}