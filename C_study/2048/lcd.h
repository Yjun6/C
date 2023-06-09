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
void lcd_darw_word(char *word,int x0,int y0,int w,int h,int color);

//可以在指定的位置显示一个指定的4位以内的数字(方便后续显示分数)
void lcd_draw_num(int num,int x0,int y0,int color);

//可以获取触摸屏的点击位置信息
int get_touch();

//可以获取触摸的滑动方向
int get_dec();

#endif 