#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nume1();//主界面
void nume2();//游戏选择函数
void play();//游戏函数

void nume1()//主界面
{
	printf("\t**********************************\n");
	printf("\t************ 猜数字游戏 **********\n");
	printf("\t****** 请选择：1.play  2.exit ****\n");
	printf("\t********  数字范围在1-100  *******\n");
	printf("\t**********************************\n");
}
void nume2()//游戏选择函数
{
	int choice = 0;
	int a = 1;
	while (a) {
a1:
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				play();//游戏函数
				printf("\t再来一把游戏？\n");
				printf("\t****** 请选择：1.play  2.exit ****\n");
				goto
					a1;
				break;
			case 2:
				printf("退出游戏...\n");
				a = 0;
				break;
			default:
				printf("输入错误，请重新选择：");
				break;
		}
	}

}
void play()//游戏函数
{
	int sjs = 0;//随机数
	int player = 0;
	sjs = rand()%100+1;
	printf("请输入猜测的数字：");
	while (1) {
		printf("请重新输入猜测的数字：");
		scanf("%d", &player);
		if (player > sjs)
			printf("猜测的数字过大\n");
		else if (player < sjs)
			printf("猜测的数字过小\n");
		else
		{
			printf("恭喜你，猜测正确\a\a\a\a\a\a\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	nume1();//主界面
	nume2();//游戏选择函数
	return 0;
}