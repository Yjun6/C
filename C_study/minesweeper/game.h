#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Line 9		//行
#define Column 9	//列

//实际数组
#define Line1 Line+2		//行
#define Column1 Column+2	//列

#define Easy 10 //简易模式

//初始化棋盘
void blank_board(char board[Line1][Column1],int line1,int column1, char set);

//打印棋盘
void print_board(char board[Line1][Column1], int line, int column);

//生成雷
void build_board(char board[Line1][Column1], int line, int column);

//判断玩家输赢
void is_win_board(char board[Line1][Column1], char board1[Line1][Column1], int line, int column);



