//三子棋

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void menu1();//主屏幕
void choice1();//选择是否玩游戏
void game();//游戏界面
void bulid_board();//创建棋盘
void print_board();//打印棋盘
void play_board();//选手下棋
void computer_board();//电脑下棋
char win_board();//判断输赢

#define R 3//行
#define L 3//列

char board[R][L] = { 0 };

void bulid_board()//创建棋盘
{
	int r = R;
	int l = L;
	int i = 0, j = 0;
	//初始化棋盘
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			board[i][j] = ' ';
		}
	}

}

void print_board()//打印棋盘
{
	//   |   |
	//-----------
	//   |   |
	//-----------
	//   |   |

	int r = R;
	int l = L;
	int i = 0, j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < l - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < r - 1)
		{
			for (j = 0;j < l;j++)
			{
				printf("---");
				if (j < l - 1)
				{
					printf("-");
				}
			}
			printf("\n");
		}

	}

}

void play_board()//选手下棋
{
	int n = 0, m = 0;
	//玩家下棋从下标为1开始的,所以输入的下标都要-1
	printf("输入您选择下的坐标位置(例：1，1)：");
	while (1)
	{
		scanf("%d,%d", &n, &m);
		n -= 1;
		m -= 1;
		if (board[n][m] == ' ')
		{
			board[n][m] = '*';
			break;
		}
		else
		{
			printf("您输入的下标有误，请重新输入：");
		}
	}

}

void computer_board()//电脑下棋
{
	int i = 0, j = 0;
	while (1)
	{
		i = rand() % R;
		j = rand() % L;
		if (board[i][j] == ' ')
		{
			printf("电脑下棋：\n");
			board[i][j] = '#';
			break;
		}
	}
}

char win_board()//判断输赢
{
	int i = 0, j = 0;
	int jade = -1;

	//行
	for (i = 0;i < R;i++)
	{
		jade = -1;
		for (j = 1;j < L;j++)
		{
			if ((board[i][0] == board[i][j]) && (board[i][0] != ' '))
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}

		if (jade == 1)
		{
			return board[i][0];
		}

	}

	//列
	for (j = 0;j < L;j++)
	{
		jade = -1;
		for (i = 1;i < R;i++)
		{
			if ((board[0][j] == board[i][j]) && (board[0][j] != ' '))
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}

		if (jade == 1)
		{
			return board[0][j];
		}

	}

	//主对角线
	jade = -1;
	for (i = 1, j = 1;i < R && j < L;i++, j++)
	{
		if ((board[0][0] == board[i][j]) && (board[0][0] != ' '))
		{
			jade = 1;
		}
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
	{
		return board[0][0];
	}

	// 副对角线
	jade = -1;
	for (i = 1, j = L-2;i < R && j >= 0;i++, j--)
	{
		if ((board[0][L-1] == board[i][j]) && (board[0][L-1] != ' '))
		{
			jade = 1;
		}
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
	{
		return board[0][L-1];
	}

	//平局
	jade = -1;
	for (i = 0;i < R;i++)
	{
		for (j = 0;j < L;j++)
		{
			if (board[i][j] != ' ')
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				goto a;
			}
		}
	}
	if (jade == 1)
		return '0';
a:
	return 1;
}

//--------------------------------------------------------------

void menu1()//主屏幕
{
	printf("************************************\n");
	printf("*************三子棋游戏*************\n");
	printf("********* 选择：1.Play 2.exit ******\n");
	printf("************************************\n");
	printf("请输入您的选择：");
}

void choice1()//选择是否玩游戏
{
	int choice = 0;
a1:
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		game();//游戏界面
		printf("是否再玩一场游戏？选择：1.Play 2.exit\n请选择：");
		goto a1;
		break;
	case 2:
		printf("正在退出游戏...\n");
		break;
	default:
		printf("输入错误，请重新输入：");
		goto a1;
		break;
	}

}

void game()//游戏界面
{
	system("cls");
	printf("\t\t欢迎来到三子棋游戏！！！\n\n");

	srand((unsigned)time(NULL));

	bulid_board();//创建棋盘
	print_board();//打印棋盘

	char win = 0;
	//1-玩家赢 2-电脑赢 0-平局
	do {
		play_board();//选手下棋
		print_board();//打印棋盘
		win = win_board();//判断输赢

		computer_board();//电脑下棋
		print_board();//打印棋盘
		win = win_board();//判断输赢

	} while ((win != '*') && (win != '#') && (win != '0'));

	if (win == '*')
	{
		printf("\t恭喜你，取得胜利！！！\n");
	}
	else if (win == '#')
	{
		printf("\t恭喜你，输给人工电脑！！！\n");
	}
	else
	{
		printf("\t本局平局！！！\n");
	}

}

//---------------------------------------------------

int main()//主函数
{
	menu1();//主屏幕
	choice1();//选择是否玩游戏
	return 0;
}
