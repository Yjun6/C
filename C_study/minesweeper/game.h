#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Line 9		//��
#define Column 9	//��

//ʵ������
#define Line1 Line+2		//��
#define Column1 Column+2	//��

#define Easy 10 //����ģʽ

//��ʼ������
void blank_board(char board[Line1][Column1],int line1,int column1, char set);

//��ӡ����
void print_board(char board[Line1][Column1], int line, int column);

//������
void build_board(char board[Line1][Column1], int line, int column);

//�ж������Ӯ
void is_win_board(char board[Line1][Column1], char board1[Line1][Column1], int line, int column);



