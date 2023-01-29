#include"game.h"

void menu1();//主界面
void Choice();//选择函数
void Game();//游戏函数
void menu2();//选择是否再玩一次游戏

void Game()
{
	srand((unsigned int)time(NULL));
	system("cls");
	//存储雷
	char board[Line1][Column1];
	//打印，存储雷个数  玩家实际操作的棋盘
	char board1[Line1][Column1];

	printf("\t欢迎来到扫雷游戏！！！\n");

	//初始化棋盘
	blank_board( board, Line1, Column1,'0');
	blank_board( board1, Line1, Column1,'*');
	//打印棋盘
	print_board( board1, Line, Column);
	//生成雷
	build_board(board, Line, Column);
	//判断玩家输赢
	is_win_board(board, board1, Line, Column);



}

void Choice()//选择函数
{
	int choice = 0;
	printf("请选择：");

	do
	{
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("已退出游戏....");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}

		menu2();//选择是否再玩一次游戏

	} while (choice!=2);

}

void menu2()//选择是否再玩一次游戏
{
	printf("\t您是否再玩一次扫雷游戏？\n");
	printf("\t 1.play 2.exit \n");
	printf("请选择：");
}

void menu1()//主界面
{
	printf("\t\t*******************************\n");
	printf("\t\t************扫雷游戏***********\n");
	printf("\t\t******** 1.play 2.exit ********\n");
	printf("\t\t*******************************\n");
	printf("\t\t*******************************\n");

}

int main()
{
	menu1();//主界面
	Choice();//选择函数


	return 0;
}