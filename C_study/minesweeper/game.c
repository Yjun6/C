#include"game.h"

//累计雷的个数
//game.c 源文件的专属函数
int cumulative(char board[Line1][Column1], int x, int y)
{
	//字符转数字 - '0' |  0--'0'(48）
	return (board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1]
		+ board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1]
		+ board[x + 1][y] + board[x + 1][y + 1] - 8 * '0');
}


//判断玩家输赢
void is_win_board(char board[Line1][Column1], char board1[Line1][Column1], int line, int column)
{
	int x = 0;
	int y = 0;
	//雷的个数
	int count = Easy;
	//没有雷的地方的个数
	int count1 = line * column - count;
	int number = 0;

	
	while (count1)
	{
		printf("请输入您选择的下标：");
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
					printf("您被炸死了！！\n\n");
					print_board(board, Line, Column);

					break;
				}
			}
			else
			{
				printf("该坐标，您已排查过，请重新输入！\n");
				continue;
			}
		}
		else
		{
			printf("您的输入有误，请重新输入：");
			continue;
		}
		count1--;
	}

	if (count1 == 0)
	{
		printf("恭喜您，扫雷成功！！\n");
		print_board(board, Line, Column);
	}

}

//生成雷
void build_board(char board[Line1][Column1], int line, int column)
{
	//生成行 1-line  列 1-column中的雷
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


//打印棋盘
void print_board(char board[Line1][Column1], int line, int column)
{
	int i = 0;
	int j = 0;

	printf("------------扫雷---------------\n");
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

//初始化棋盘
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
