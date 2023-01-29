#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char p(char board[3][3])
{
	int i = 0, j = 0;
	int jade = 0;
	//行
	for (i = 0;i < 3;i++)
	{
		jade = 1;
		for (j = 1;j < 3;j++)
		{
			if (board[i][0] == board[i][j] && board[i][0] != 'O')
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}
		if (jade == 1)
			return board[i][0];
	}


	//列
	for (i = 0;i < 3;i++)
	{
		jade = 1;
		for (j = 1;j < 3;j++)
		{
			if (board[0][i] == board[j][i] && board[0][i] != 'O')
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}
		if (jade == 1)
			return board[0][i];
	}

	//正对角线
	jade = 1;
	for (i = 1;i < 3;i++)
	{
		if (board[0][0] == board[i][i] && board[0][0] != 'O')
			jade = 1;
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
		return board[0][0];

	//负对角线
	jade = 1;
	for (i = 1, j = 1;i < 3 && j >= 0;i++, j--)
	{
		if (board[0][2] == board[i][j] && board[0][2] != 'O')
			jade = 1;
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
		return board[0][2];

	return 'O';
}

int main()
{
	char board[3][3] = { 0 };
	int i = 0, j = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf("%c", &board[i][j]);
			getchar();
		}
	}

	char a = p(board);
	if (a == 'B')
		printf("BoBo wins!\n");
	if (a == 'K')
		printf("KiKi wins!\n");
	if (a == 'O')
		printf("No winner!\n");

	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0, m = 0;
//	int arr[100000] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//	while (k)
//	{
//		k--;
//		char c = 0;
//		int e = 0, f = 0;
//		getchar();
//		scanf("%c %d %d", &c, &e, &f);
//		e--;
//		f--;
//
//		if (c == 'r')
//		{
//			for (i = 0;i < m;i++)
//			{
//				int tmp = arr[e][i];
//				arr[e][i] = arr[f][i];
//				arr[f][i] = tmp;
//			}
//		}
//		else if (c == 'c')
//		{
//			for (i = 0;i < n;i++)
//			{
//				int tmp = arr[i][e];
//				arr[i][e] = arr[i][f];
//				arr[i][f] = tmp;
//			}
//		}
//	}
//
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void Sort(int* arr, int len)
//{
//    int i = 0, j = 0;
//    for (i = 0;i < len - 1;i++)
//    {
//        for (j = i + 1;j < len;j++)
//        {
//
//            if (arr[i] > arr[j])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    Sort(arr, n);
//
//    printf("%d ", arr[0]);
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i] == arr[i - 1])
//            continue;
//
//        printf("%d ", arr[i]);
//    }
//
//
//    return 0;
//}

//#include<iostream>
//#include<algorithm>//sort需要包含的头文件
//
//using namespace std;
//int main()
//{
//    int n, t;
//    cin >> n;
//    int k[n + 1];//数组，把n个数都放进去
//    for (int i = 0;i < n;++i)
//    {
//        cin >> k[i];//逐个输入
//    }
//    sort(k, k + n);//sort可以排序
//    for (int j = 0;j < n;++j)
//    {
//        if (k[j] == k[j + 1])
//            continue;//重复的不输出
//        cout << k[j] << " ";
//    }
//    return 0;
//}

//int main()
//{
//	double a = 0.0;
//	double sum = 0.0;
//	for (int i = 0;i < 3;i++)
//	{
//		scanf("%lf", &a);
//		sum += a;
//	}
//
//	printf("%.2lf %.2lf", sum, sum / 3.0);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//    printf("Practice makes perfect!\n");
//
//    return 0;
//}

//int main()
//{
//	int h = 0, min = 0;
//	scanf("%d:%d", &h, &min);
//	int minu = 0;
//	scanf("%d", &minu);
//	
//	//超过60
//	//不超过60
//	min += minu % 60;
//	if (min > 60)
//	{
//		min -= 60;
//		h++;
//	}
//	
//	//不超过24
//	//超过24
//	h += minu / 60;
//	h %= 24;
//
//	printf("%02d:%02d", h, min);
//
//	return 0;
//}

//int main()
//{
//	int count1 = 0, count2 = 0;
//	int n = 0;
//
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &n);
//		if (n > 0)
//			count1++;
//		else if (n < 0)
//			count2++;
//	}
//	
//
//	printf("positive:%d\n", count1);
//	printf("negative:%d\n", count2);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = 0;
//	int sum = 0;
//
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int i = 0, j = 0;
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = 0;
//	int max = 0;
//	int min = 0;
//
//	scanf("%d", &tmp);
//	max = tmp;
//	min = tmp;
//	for (int i = 1;i < n;i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//			max = tmp;
//		if (tmp < min)
//			min = tmp;
//
//	}
//
//	printf("%d\n", max - min);
//
//	return 0;
//}

//void sort(int* arr, int len)
//{
//	int i = 0, j = 0;
//	for (i = 0;i < len - 1;i++)
//	{
//		for (j = i;j < len;j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//
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
//	int arr[55] = { 0 };
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

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int count1 = 0, count2 = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > 0)
//			count1++;
//		else if (tmp < 0)
//			count2++;
//	}
//
//	printf("positive:%d\n", count1);
//	printf("negative:%d\n", count2);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 9;i <= 2019;i++)
//	{
//		int j = i;
//		while (j)
//		{
//			if (j % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			j /= 10;
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	i = n % 2;
//
//	printf("%d %d", n / 2 + i, n / 2);
//
//
//	return 0;
//}

//int main()
//{
//	char s1[50] = { 0 };
//	char s2[50] = { 0 };
//	scanf("%s", &s1);
//	scanf("%s", &s2);
//
//	if (strcmp(s1, s2) == 0)
//		printf("same\n");
//	else
//		printf("different\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}