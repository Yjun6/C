#include"game.h"

char is_win(char board[H][L], int h, int l)//判断输赢
{
/*	 |   |
  ---|---|---
	 |   |
  ---|---|---
	 |   |		*/

	int jade = 0;

	int i = 0;
	int j = 0;

	//行 -> win
	for (j = 0;j < h;j++)
	{
		jade = 0;
		for (i = 1;i < l;i++)
		{
			if (board[j][0] == board[j][i]
				&& board[j][0] != ' ')
			{
				jade++;
			}
		}

		if (jade == l - 1)
		{
			return board[j][0];
		}
	}


	//列 -> win
	for (i = 0;i < l;i++)
	{
		jade = 0;
		for (j = 1;j < h;j++)
		{

			if (board[0][i] == board[j][i]
				&& board[0][i] != ' ')
			{
				jade++;
			}
		}

		if (jade == h - 1)
		{
			return board[0][i];
		}
	}


	//左对角线
	jade = 0;
	for (i=1,j=1;(i<h)&&(j<l);i++,j++)
	{
		if ((board[0][0] == board[i][j])
			&& (board[0][0] != ' '))
		{
			jade++;
		}
	}
	if (jade == h-1 || jade==l-1)
	{
		return board[0][0];
	}

	//右对角线
	jade = 0;
	for (i=1,j=l-2;(i < h) && (j>=0);i++,j--)
	{
		if ((board[0][l-1] == board[i][j])
			&& (board[0][l-1] != ' '))
		{
			jade++;
		}
	}
	if (jade == h-1 || jade == l-1)
	{
		return board[0][l-1];
	}


	//平局
	jade = 0;
	for (j = 0;j < h;j++)
	{
		for (i = 0;i < l;i++)
		{
			if (board[j][i] != ' ')
			{
				jade++;
			}
		}
	}
	if (jade==l*h)
	{
		return 'Z';
	}


}

void computer_game(char board[H][L], int h, int l)//电脑下棋
{
	int i = 0;
	int j = 0;

	printf("电脑下棋：\n");
	while (1)
	{
		i = rand() % h;
		j = rand() % l;

		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}

}

void play_game(char board[H][L], int h, int l)//玩家下棋
{
	int i = 0;
	int j = 0;
	printf("玩家下棋，请输入选择下的棋的坐标：");
	while (1)
	{
		scanf("%d %d", &i, &j);
		//玩家不知道下标从0开始
		i -= 1;
		j -= 1;
		if (board[i][j] == ' ')
		{
			board[i][j] = '*';
			break;
		}
		else
		{
			printf("输入的该坐标非法，请重新输入:");
		}
	}


}

void print(char board[H][L], int h, int l)//打印棋局
{
	/*   |   |
	  ---|---|---
		 |   |   
	  ---|---|---
	     |   |		*/
	
	int i = 0;
	int j = 0;
	for (j = 0;j < h;j++)
	{
		for (i = 0;i < l-1;i++)
		{
			printf(" %c |", board[j][i]);

			if (i==l-2)
			{
				printf(" %c \n", board[j][i + 1]);
			}
		}

		if (j < h-1)
		{
			for (i = 0;i < l - 1;i++)
			{
				printf("---|");

				if (i == l - 2)
				{
					printf("---\n");
				}
			}
		}
	}

}

void blank_borad(char board[H][L], int h, int l)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0;i < h;i++)
	{
		for (j = 0;j < l;j++)
		{
			board[i][j] = ' ';
		}
	}
}