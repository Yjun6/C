#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int Add(int x, int y)
{
	return x * y;
}

int main()
{
	//1
	int result1 = Add(2, 4);
	printf("%d\n", result1);
	//2
	int(*p2)(int, int) = Add;
	printf("%d\n", p2(2, 4));
	printf("%d\n", (*p2)(2, 4));
	printf("%d\n", (******p2)(2, 4));
	//3
	int(*p3)(int, int) = &Add;
	printf("%d\n", p3(2, 4));
	printf("%d\n", (*p3)(2, 4));
	printf("%d\n", (*****p3)(2, 4));
	return 0;
}