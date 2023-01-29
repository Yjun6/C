#include<stdio.h>
#include<string.h>

void nixu(char*, int);

void nixu(char* arr, int len)
{
	char tmp;
	int i = 0;
	while (i < len / 2)
	{
		tmp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = tmp;
		i++;
	}

}


int main()
{
	char arr[] = "sagfhjasggjawjka";
	int len = strlen(arr);

	nixu(arr, len);

	printf("%s\n", arr);

	return 0;
}


//#include<stdio.h>
//
//
//double recurrence(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * recurrence(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0/recurrence(n, -k);
//	}
//	
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	double sum = recurrence(n, k);
//	printf("%lf ", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 2,3,4,5,6,7,8,9,10,1 };
//
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < 10;i++)
//	{
//		tmp = arr2[i];
//		arr2[i] = arr1[i];
//		arr1[i] = tmp;
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("arr1[%d] = %d ",i, arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("arr2[%d] = %d ",i, arr2[i]);
//	}
//
//	return 0;
//}

////1.使用init()函数初始化数组
//
//#include<stdio.h>
//
//void init(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		arr[i] = 0;
//	}
//
//
//}
//
//int main()
//{
//	int arr[] = { 5,3,4,9,6,7,4,1,2,3,56,9,8,7,45,1,6 };
//
//
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//
//	////初始化数组全为0
//	init(arr, len);
//
//	for (i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}


//2.使用print()函数打印数组元素

//#include<stdio.h>
//
//void print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		printf("arr[%d] = %d ", i, arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,3,4,9,6,7,4,1,2,3,56,9,8,7,45,1,6 };
//
//
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//打印数组的每个元素
//	print(arr, len);
//
//	return 0;
//}﻿
//
//
////3.使用reverse()函数完成数组逆置
//
//#include<stdio.h>
//
//void reverse(int* arr, int len)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < len / 2;i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,3,4,9,6,7,4,1,2,3,56,9,8,7,45,1,6 };
//
//
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//函数完成数组元素的逆置。
//	reverse(arr, len);
//
//	for (i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

