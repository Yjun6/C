#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define H 3//��
#define L 3//��

void blank_borad(char board[H][L], int h, int l);//��ʼ������
void print(char board[H][L], int h, int l);//��ӡ���
void play_game(char board[H][L], int h, int l);//�������
void computer_game(char board[H][L], int h, int l);//��������
char is_win(char board[H][L], int h, int l);//�ж���Ӯ
