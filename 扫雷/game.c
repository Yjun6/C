#include"game.h"

//�ۼ��׵ĸ���
//game.c Դ�ļ���ר������
int cumulative(char board[Line1][Column1], int x, int y)
{
	//�ַ�ת���� - '0' |  0--'0'(48��
	return (board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1]
		+ board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1]
		+ board[x + 1][y] + board[x + 1][y + 1] - 8 * '0');
}


//�ж������Ӯ
void is_win_board(char board[Line1][Column1], char board1[Line1][Column1], int line, int column)
{
	int x = 0;
	int y = 0;
	//�׵ĸ���
	int count = Easy;
	//û���׵ĵط��ĸ���
	int count1 = line * column - count;
	int number = 0;

	
	while (count1)
	{
		printf("��������ѡ����±꣺");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= line
			&& y >= 1 && y <= column)
		{
			if (board1[x][y] == '*')
			{
				if (board[x][y] == '0')
				{
					number = cumulative(board, x, y);
					board1[x][y] = number + '0';
					system("cls");
					print_board(board1, Line, Column);
				}
				else if (board[x][y] == '1')
				{
					printf("����ը���ˣ���\n\n");
					print_board(board, Line, Column);

					break;
				}
			}
			else
			{
				printf("�����꣬�����Ų�������������룡\n");
				continue;
			}
		}
		else
		{
			printf("���������������������룺");
			continue;
		}
		count1--;
	}

	if (count1 == 0)
	{
		printf("��ϲ����ɨ�׳ɹ�����\n");
		print_board(board, Line, Column);
	}

}

//������
void build_board(char board[Line1][Column1], int line, int column)
{
	//������ 1-line  �� 1-column�е���
	int x = 0;
	int y = 0;
	int count = 0;
	while (1)
	{
		x = rand() % line + 1;
		y = rand() % column + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
		if (count == Easy)
		{
			break;
		}
	}
}


//��ӡ����
void print_board(char board[Line1][Column1], int line, int column)
{
	int i = 0;
	int j = 0;

	printf("------------ɨ��---------------\n");
	for (i = 0;i <= line;i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1;i <= line;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= column;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

//��ʼ������
void blank_board(char board[Line1][Column1], int line1, int column1, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0;i < line1;i++)
	{
		for (j = 0;j < column1;j++)
		{
			board[i][j] = set;
		}
	}

}
