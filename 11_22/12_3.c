#include<stdio.h>
//
////E只能为奇数
//#define E 13
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char c = '*';
//
//	for (i = 1;i <= E;i++)
//	{
//		if (i < E / 2 + 1)
//		{
//			for (j = E / 2 + 1 - i;j > 0;j--)
//			{
//				printf(" ");
//			}
//
//			for (j = 0;j < 2 * i - 1;j++)
//			{
//				printf("%c", c);
//			}
//			printf("\n");
//		}
//		else if (i == E / 2 + 1)
//		{
//			for (j = E;j > 0;j--)
//			{
//				printf("%c", c);
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = i - (E / 2 + 1);j > 0;j--)
//			{
//				printf(" ");
//			}
//
//			for (j = 0;j < (E-i) * 2 + 1 ;j++)
//			{
//				printf("%c", c);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
////计算整数的个位数
//int Number(int i)
//{
//	int count = 0;
//
//	do {
//		count++;
//		i /= 10;
//	} while (i);
//
//	return count;
//}
//
//
//int Is(int i)
//{
//	int len = Number(i);
//	int j = i;
//	int sum = 0;
//
//
//	while (j)
//	{
//		sum += pow(j % 10, len);
//		j /= 10;
//
//	}
//
//	if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//
//}
//
//int main()
//{
//	//0-100000
//	int i = 0;
//	int n = 0;
//
//	for (i = 0;i < 100000;i++)
//	{
//		n = Is(i);
//		if (n == 1)
//		{
//			printf("%d  ", i);
//		}
//
//
//	}
//
//	return 0;
//}

//void re(char* str)
//{
//	int len = strlen(str);
//	printf("%d ", len);//7
//
//}

//int main()
//{
//	char arr[] = "shgjhgh";
//	re(arr);
//	return 0;
//}

//学生结构体
struct Stu
{
	char name[20];//名字
	int age;//年龄
	char sex[10];//性别
	int c_score;//C语言成绩
	int java_score;//java成绩
}s1,s2;//s1,s2---全局变量

//老师结构体
struct Tch
{
	char name[20];//名字
	int age;//年龄
	struct Stu a;//老师手下的学生
};

void Print1(struct Tch pc1)
{
	printf("%s %d %s %d %s %d %d\n", 
	pc1.name, pc1.age, pc1.a.name, pc1.a.age, pc1.a.sex, 
 pc1.a.c_score, pc1.a.java_score);
}

void Print2(struct Tch* pc2)
{
	printf("%s %d %s %d %s %d %d\n",
	pc2->name, pc2->age, pc2->a.name, pc2->a.age, pc2->a.sex, 
 pc2->a.c_score, pc2->a.java_score);

	printf("%s %d %s %d %s %d %d\n",
	(*pc2).name, (*pc2).age, (*pc2).a.name, (*pc2).a.age, 
 (*pc2).a.sex, (*pc2).a.c_score, (*pc2).a.java_score);
}

int main()
{
	struct Tch c = { "maxi",35,{"李四",18,"男",78,98} };

	//打印结构体
	Print1(c);//传值调用
	Print2(&c);//传址调用


	return 0;
}

//
////指针数组
//int main()
//{
//	int a[] = { 1,3,5,7 };
//	int b[] = { 2,4,6,8 };
//	int c[] = { 5,6,7,8 };
//
//	int* str[3] = { a, b, c };//数组名=首地址
//
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d  ", str[i][j]);
//							// *(str[i] + j)
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}

//F10 不能调试到main函数以外的函数内部
// 除非设置断点
//F11 能调试到main函数以外的函数内部

//#include<stdio.h>
//#include<string.h>
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


