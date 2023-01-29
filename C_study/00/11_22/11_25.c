

//int A(int n, int m)
//{
//	int count = 0;
//	//存储n,m二进制中的1
//	int tmp = n ^ m;
//	//计算二进制中的1
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//
//
//	return count;
//
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int ret = A(n, m);
//	printf("%d", ret);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void Six(long long n)
//{
//    int tmp = 0;
//
//    if(n>0)
//    {
//        tmp = n % 6;
//        Six(n / 6);
//        printf("%d", tmp);
//    }
//}
//
//int main() {
//    long long n = 0;
//    scanf("%lld", &n);
//
//    Six(n);
//
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
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
//	int arr[50] = { 0 };
//	int i = 0;
//
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int tmp = 0;
//	scanf("%d", &tmp);
//
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] == tmp)
//		{
//			continue;
//		}
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[50] = { 0 };
	int i = 0;

	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}

	int tmp = 0;
	scanf("%d", &tmp);

	//删除
	int j = 0;
	for (i = 0;i < n;i++)
	{
		if (arr[i] != tmp)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	
	for (i = 0;i < j;i++)
	{
		printf("%d ", arr[i]);

	}

	return 0;
}