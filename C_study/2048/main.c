#include"lcd.h"
#include"word.h"
#include <time.h>

char bmp[12][20] = {{"00.bmp"},{"01.bmp"},{"02.bmp"},{"03.bmp"},{"04.bmp"},{"05.bmp"},
                    {"06.bmp"},{"07.bmp"},{"08.bmp"},{"09.bmp"},{"010.bmp"},{"011.bmp"}};

//游戏的主体数组
int num[4][4] = {0};
//存储数组内已有的数字数量
int size = 0;
int flags=0;
double score=0;

//在数组随机的空白位置产生一个随机的2或者4
void add_num();
//根据数组中的内容,需要把游戏界面展示出来(界面其实就是16张图片)
void draw_game();
//判断游戏是否可以继续进行,如果可以继续,就返回1,否则返回0
int check_over();
//按照上滑的逻辑处理二维数组中的所有数据
//返回一个标志,表示此次滑动是否产生了移动或者合并(因为存在移动或者合并的时候,就应该添加一个新数字)
//返回0表示此处处理没有移动或者合并,返回1表示存在移动或者合并
int move_up(); 
//按照下滑的逻辑处理二维数组中的所有数据
int move_down();
//按照左滑的逻辑处理二维数组中的所有数据
int move_left();
//按照右滑的逻辑处理二维数组中的所有数据
int move_right();

int main()
{
    //初始化屏幕
    lcd_init();
    //清屏
    lcd_clear(0x00FFFFFF);

    //================================================
    //在数组随机的空白位置产生一个随机的2或者4
    add_num();
    //在数组随机的空白位置产生一个随机的2或者4
    add_num();
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",num[i][j]);
        }
    }
    //根据数组中的内容,需要把游戏界面展示出来(界面其实就是16张图片)
    draw_game();

    //不断的接收用户的滑动方向,并且处理数组
    int flag = 0;
    while(check_over()) //判断游戏是否可以继续进行
    {
        //获取手指的滑动方向
        int r = get_dec();
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
        }

        //如果存在移动或者合并,应该在随机的空白位置添加一个随机的2/4
        if(flags == 1)
        {
            add_num();
        }
        //把此次的滑动效果显示出来
         lcd_clear(0x00FFFFFF);
        draw_game();
    }

    //显示游戏结束的图片
    //lcd_draw_bmp()
    
    //================================================
    //关闭屏幕
    lcd_close();
    return 0;
}

//在数组随机的空白位置产生一个随机的2或者4
void add_num()
{
    srand((unsigned int)time(0));
    int n = rand() % (16 - size);
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
    size++;
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
    if(size < 16)
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
}







