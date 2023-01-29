//换啤酒问题
//需求:啤酒2元1瓶，4个盖子可以换一瓶，2个空瓶可以换一瓶
//请问n元钱可以喝多少瓶酒，剩余多少空瓶和盖子
//答案: 15瓶3盖子1瓶子

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;//啤酒数量
	int number1 = 0;//空瓶数量
	int number2 = 0;//盖子数量

	count = n / 2;
	number1 = count;
	number2 = count;
	//先算瓶子
	while (number1>1)
	{
		count += number1 / 2;
		int i = number1 % 2;
		number1 = number1 / 2 + i;
	}
	number2 = count;

	//再算盖子
	while (number2 >= 4)
	{
		int i = 0;
		count += number2 / 4;
		i = number2 % 4;
		number2 = number2 / 4 + i;

	}

	printf("%d %d %d", count, number1, number2);

	return 0;
}