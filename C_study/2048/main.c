#include"lcd.h"
#include"word.h"
#include <time.h>

extern int flags;
//广告位 代招商 80 * 80
char ad[20] = {"_01.bmp"};

void func2();

int main()
{
    //随机数的种子
    srand((unsigned int)time(0));
    //初始化屏幕
    lcd_init();
a2:
    lcd_clear(0x00FFFFFF);

    lcd_draw_bmp("menu.bmp", 100, 100);
    int ret = 0;
    while(1)
    {
    int x = get_touch();
        //接收进入游戏界面返回值   
        if (x == 1) 
        {
a3:
            ret = menu();
            break;
        }
    }

a1:
   while(1)
   {
        if(ret == 1)
        {
            //进入游戏
            func2();
            //游戏结束
            ret = menu2();
        }else if(ret == 0)
        {
            //退出
            goto a2;
        }else if(ret == 2)
        {
            //查看历史最高分
            menu3();            
            goto a3;
        }else{
            goto a1;
        }
   }
    //关闭屏幕
    lcd_close();
    return 0;
}

//进入游戏
void func2()
{
    //清屏
    lcd_clear(0x00FFFFFF);
    lcd_name();
    lcd_draw_bmp(ad,0,0);
    lcd_draw_bmp(ad,0,120);
    lcd_draw_bmp(ad,0,240);
    lcd_draw_bmp("recall.bmp",700,300);
    lcd_draw_bmp("return.bmp",700,380);
    lcd_draw_bmp("exit.bmp",700,220);
    //menu();
    //在数组随机的空白位置产生2个随机的2或者4
a4:
    add_num();
    add_num();  
    //根据数组中的内容,需要把游戏界面展示出来(界面其实就是16张图片)
    draw_game();
    //不断的接收用户的滑动方向,并且处理数组
    int flag = 0;
    //保存用户上一步数据
    while(check_over()) //判断游戏是否可以继续进行
    {
        //显示分数
        showScore();
       //获取手指的滑动方向
        int r = get_dec();

        if(r!=5)
        {
            old();
        }
        //根据手指的滑动方向,处理数组
        if(r == 1)
        {
            //按照上滑的逻辑处理二维数组中的所有数据
            flag = move_up(); 
        }else if(r == 2)
        {
            //按照下滑的逻辑处理二维数组中的所有数据
            flag = move_down();
        }else if(r == 3)
        {
            //按照左滑的逻辑处理二维数组中的所有数据
            flag = move_left();
        }else if(r == 4)
        {
            //按照右滑的逻辑处理二维数组中的所有数据
            flag = move_right();
        // }
        }else if(r == 5)
        {
            flags=0;
            recall();        
        }else if(r == 6)
        {
         recover(); 
         goto a4;
        }else if(r==7)
        {
            break;
        }
        //如果存在移动或者合并,应该在随机的空白位置添加一个随机的2/4
        if(flags == 1)
        {
            add_num();
            printf("add_num");
        }
        func1();
         draw_game();
         
    }


    //显示游戏结束的图片
    // sleep(2);
    if(comp())
    {
        menu1();
    }
    // }else{

    // }
     
    //比较分数
    //com();  
    // 输出历史最高分和当前分数
    //最高分函数

}
