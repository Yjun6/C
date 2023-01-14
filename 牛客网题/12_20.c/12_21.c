#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	double arr[100] = { 0 };
	double max = 0.0, min = 0.0, adv = 0.0, sum = 0.0;

	int i = 0;
	scanf("%lf", &arr[0]);
	max = arr[0];
	min = arr[0];
	sum = arr[0];

	for (i = 1;i < n;i++)
	{
		scanf("%lf", &arr[i]);
		sum += arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	adv = 1.0 * sum / n;
	printf("%.2lf %.2lf %.2lf", max, min, adv);


	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d\n", (a + b - c) * d);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "I will learn C++ well!" << endl;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char s[] = "admin admin";
//	char s1[50] = { 0 };
//	while (scanf("%[^\n]s", s1) != EOF)
//	{
//		getchar();
//		if (strcmp(s1, s) == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m], tmp = 0;
//    int i = 0, j = 0;
//    int count = 0;
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &tmp);
//            if (tmp == arr[i][j])
//                count++;
//
//        }
//    }
//
//    double a = count * 1.0 / (n * m) * 100;
//    printf("%.2lf", a);
//
//    return 0;
////}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int is_prime[105] = { 0 };//存储是否是素数
//	int i = 0, j = 0;
//	int count = 0;
//
//	//判断是否是素数
//	//0,1不是素数，自然去除
//	//是素数->1 不是素数—>-1
//	is_prime[0] = -1;
//	is_prime[1] = -1;
//	for (i = 2;i <= n;i++)
//	{
//		if (is_prime[i] != -1)
//		{
//			is_prime[i] = 1;
//			for (j = i * i;j <= n;j += i)
//			{
//				if(is_prime[j]!=-1)
//					count++;
//
//				is_prime[j] = -1;
//			}
//		}		
//	}
//
//	for (i = 0;i <= n;i++)
//	{
//		if (is_prime[i] == 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//	printf("%d\n", count++);
//
//	return 0;
//}

//#include<stdio.h>
//
//void sort(int* arr, int len)
//{
//	int i = 0, j = 0;
//	for (i = 0;i < len - 1;i++)
//	{
//		for (j = i + 1;j < len;j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &arr[n]);
//
//	sort(arr, n + 1);
//
//	for (i = 0;i < n + 1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int sum = 0, max = 0, min = 0;
//	int tmp = 0;
//	int i = 0;
//
//	while (scanf("%d", &tmp)!=EOF)
//	{
//		sum = tmp;
//		max = tmp;
//		min = tmp;
//
//		for (i = 1;i < 7;i++)
//		{
//			scanf("%d", &tmp);
//			sum += tmp;
//			if (tmp > max)
//				max = tmp;
//			if (tmp < min)
//				min = tmp;
//
//		}
//		sum -= max + min;
//
//		double adv = sum / 5.0;
//		printf("%.2lf\n", adv);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1;i <= n;i++)
//		{
//			for (j = 1;j <= i;j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		switch (n)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		default:
//			break;
//
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (n >= 10)
//	{
//		printf("Danger++\n");
//	}
//	else if (n >= 4)
//	{
//		printf("Danger\n");
//	}
//	else
//	{
//		printf("Good\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0 , d = 0.0  , e = 0.0;
//	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
//	printf("%.2lf", (a + b + c + d + e) / 5.0);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0, j = 0;
//		for (i = 1;i <= n;i++)
//		{
//			if (i == 1)
//			{
//				printf("%c\n", '*');
//			}
//			else if(i == n)
//			{
//				for (j = 0;j < n;j++)
//				{
//					printf("%c ", '*');
//				}
//				printf("\n");
//			}
//			else
//			{
//				printf("%c ", '*');
//
//				for (j = 0;j < i-2;j++)
//				{
//					printf("  ");
//				}
//				printf("%c\n", '*');
//			}
//		}
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0, j = 0;
//		for (i = 1;i <= n;i++)
//		{
//			if (i == 1 || i == n)
//			{
//				for (j = 0;j < n;j++)
//				{
//					printf("%c ", '*');
//				}
//				printf("\n");
//			}
//			else
//			{
//				printf("%c ", '*');
//				for (j = 0;j < n - 2;j++)
//				{
//					printf("  ");
//				}
//
//				printf("%c\n", '*');
//			}
//		}
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0, j = 0;
//		for (i = 1;i <= n;i++)
//		{
//			//空格
//			for (j = 0;j < n-i;j++)
//			{
//				printf(" ");
//			}
//
//			//图案
//			printf("%c\n", '*');
//
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//
//			//空格
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//
//			//图案
//			printf("%c\n", '*');
//
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		//上半部分
//		for (i = 0;i < n;i++)
//		{
//			//空格
//			for (j = 0;j < 2 * (n - i);j++)
//			{
//				printf(" ");
//			}
//
//			//图案
//			for (j = 0;j < i + 1;j++)
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//		}
//
//		//中间
//		for (i = 0;i <= n;i++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//
//		//下半部分
//		for (i = 0;i < n;i++)
//		{
//			//空格
//			for (j = 0;j < 2 * (i + 1);j++)
//			{
//				printf(" ");
//			}
//
//			//图案
//			for (j = 0;j < n - i;j++)
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//
//		}
//
//	}
//
//	return 0;
//}
 
