#include"game.h"

void menu1();//选择界面
void test();//选择函数
void Game();//三子棋游戏运行函数
void menu2();//再次选择玩游戏函数

void Game()
{
	srand((unsigned int)time(NULL));
	system("cls");
	printf("\t\t\t欢迎来到三子棋游戏！！！\n\n\n");

	char win;

	char board[H][L];
	//初始化棋盘
	blank_borad(board, H, L);
	//打印空白棋局
	print(board, H, L);

	while (1)
	{
		//玩家下棋
		play_game(board, H, L);
		//打印棋局
		print(board, H, L);
		//判断输赢
		win = is_win(board, H, L);
		if (win == '*')
		{
			printf("玩家胜利");
			break;
		}
		else if (win == '#')
		{
			printf("电脑胜利");
			break;
		}
		else if (win == 'Z')
		{
			printf("平局");
			break;
		}

		//电脑下棋
		computer_game(board, H, L);
		//打印棋局
		print(board, H, L);
		//判断输赢
		win = is_win(board, H, L);
		if (win == '*')
		{
			printf("玩家胜利");
			break;
		}
		else if (win == '#')
		{
			printf("电脑胜利");
			break;
		}
		else if (win == 'Z')
		{
			printf("平局");
			break;
		}
	}



}

void test()//选择函数
{
	int choice = 0;
	do
	{
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			Game();//三子棋游戏运行函数
			break;
		case 2:
			printf("已退出游戏....\n");
			break;
		default:
			printf("输入错误，请重新选择：");
			break;
		}

		if (choice==1)
		{
			menu2();//再次选择玩游戏函数
		}

	} while (choice != 2);


}

void menu2()//再次选择玩游戏函数
{
	printf("\t您是否再玩一轮三子棋游戏？\n");
	printf("\t 1.play 2.exit\n");
}

void menu1()//选择界面
{
	printf("\t***********************************\n");
	printf("\t********欢迎来到三子棋游戏*********\n");
	printf("\t***** 请选择： 1.play 2.exit ******\n");
	printf("\t***********************************\n");
}

int main()
{

	menu1();//选择界面
	test();//选择函数

	return 0;
}