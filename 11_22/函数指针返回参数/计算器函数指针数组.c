#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void menu()//主屏幕
{
	printf("\t************************************\n");
	printf("\t***********  1.add  2.sub   ********\n");
	printf("\t***********  3.mul  4.div   ********\n");
	printf("\t***********  0.exit         ********\n");
	printf("\t************************************\n");

}

//add 加法 sub 减法 mul 乘法 div 除法
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

//全局函数指针数组
int (*pt[5])(int, int) = { NULL, add, sub, mul, div };

int main()
{
	int choice = 0;
	int x = 0, y = 0;
	do
	{
		menu();//主屏幕
		printf("请输入您的选择：");
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("正在退出计算器，请稍等...\n");
			break;
		}
		else if (choice <= 4 && choice >= 1)//
		{
			printf("请输入两个数：");
			scanf("%d %d", &x, &y);
			int result = pt[choice](x , y);
			printf("结果是：%d\n", result);
		}
		else
		{
			printf("输入错误，请重新输入：");
		}
	} while (choice);

	return 0;
}