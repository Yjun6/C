#ifndef __LCD_H__     //防止头文件重复包含
#define __LCD_H__


#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <linux/input.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

//在数组随机的空白位置产生一个随机的2或者4
void add_num();
//根据数组中的内容,需要把游戏界面展示出来(界面其实就是16张图片)
void draw_game();
//判断游戏是否可以继续进行,如果可以继续,就返回1,否则返回0
int check_over();
//按照上滑的逻辑处理二维数组中
//返回一个标志,表示此次滑动是否产生了移动或者合并(因为存在移动或者合并的时候,就应该的所有数据添加一个新数字)
//返回0表示此处处理没有移动或者合并,返回1表示存在移动或者合并
int move_up(); 
//按照下滑的逻辑处理二维数组中的所有数据
int move_down();
//按照左滑的逻辑处理二维数组中的所有数据
int move_left();
//按照右滑的逻辑处理二维数组中的所有数据
int move_right();
//开始屏幕界面
int menu();
//从文件拿到历史最高分
int chu_max();
//显示小组成员
void lcd_name();
//达到最高分 出现恭喜界面
void menu1();
//使用全局数组保存
void old();
//游戏结束 重新开始
int menu2();
//显示当前分数
void showScore();
//保存最高分
void max(int tmp);
//查看历史最高分
void menu3();
//数组已有内容大小
int size();
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

//初始化屏幕
void lcd_init();

//关闭屏幕
void lcd_close();

//可以在LCD屏幕上指定的位置(x,y)显示一个指定颜色(color)的点
void lcd_draw_point(int x,int y,int color);

//把lcd刷成指定的颜色
void lcd_clear(int color);

//在LCD指定的位置显示一个指定大小,指定颜色的矩形
void lcd_draw_rect(int x0,int y0,int w,int h,int color);

//在LCD指定的位置显示一个指定半径,指定颜色的圆
void lcd_draw_cir(int x0,int y0,int r,int color);

//这个函数就可以把指定的图片显示到指定的位置
void lcd_draw_bmp(char *name,int x0,int y0);

//调用这个函数就可以显示指定的文字到指定的位置
void lcd_draw_word(char *word,int x0,int y0,int w,int h,int color);

//可以在指定的位置显示一个指定的5位以内的数字(方便后续显示分数)
void lcd_draw_num(int num,int x0,int y0,int color);

//可以获取触摸屏的点击位置信息
int get_touch();

//可以获取触摸的滑动方向
int get_dec();
//调试专用
void func1();
//比较当前分数和历史最高分 当前分数高 返回1 
int comp();
//撤回
void recall();
void recover();
#endif 