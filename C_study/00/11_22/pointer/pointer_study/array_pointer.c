#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print1(int arr[3][4], int r, int l)
{
	int i = 0, j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[4], int r, int l)
{
	int i = 0,j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			//printf("%d ", (*(p + i))[j]);
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	//print1(arr, 3, 4);
	print2(arr, 3, 4);//arr - 二维数组第一行all元素
	return 0;
}