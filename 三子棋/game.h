#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define H 3//行
#define L 3//列

void blank_borad(char board[H][L], int h, int l);//初始化棋盘
void print(char board[H][L], int h, int l);//打印棋局
void play_game(char board[H][L], int h, int l);//玩家下棋
void computer_game(char board[H][L], int h, int l);//电脑下棋
char is_win(char board[H][L], int h, int l);//判断输赢
