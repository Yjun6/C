#include<stdio.h>


int main()
{
	//奇数  偶数
	int a = 0;
	scanf("%d", &a);
	int arr1[16] = { 0 };//存奇数位
	int arr2[16] = { 0 };//存偶数位

	int i = 1;
	int n = 0;
	int m = 0;
	while (i <= 32)
	{
		if (i % 2 != 0)//奇数位
		{
			arr1[n] = a & 1;
			n++;
		}
		else//偶数位
		{
			arr2[m] = a & 1;
			m++;
		}
		
		a >>= 1;
		i++;
	}

	printf("%d的二进制位的奇数位的序列：", a);
	for (i = 15;i >= 0;i--)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");

	printf("%d的二进制位的偶数位的序列：", a);
	for (i = 15;i >= 0;i--)
	{
		printf("%d", arr2[i]);
	}


	return 0;
}



//int A(int a)
//{
//	if (a == 1)
//	{
//		return 1;
//	}
//	else if (a == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return A(a - 1) + A(a - 2);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int set = 0;
//	scanf("%d", &a);
//	
//	set = A(a);
//
//	printf("%d", set);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0, m = 0;
//	int sum = 0;//总和
//	int max = 0;
//	int min = 0;
//
//	scanf("%d %d", &n, &m);
//	float adv = 0.0;//平均数
//	float adv_max = 0.0;//最大平均数
//
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		sum = 0;
//		max = -1;
//		min = 11;
//
//		for (int j = 0;j < m;j++)
//		{
//			sum += arr[i][j];
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//			if (arr[i][j] < min)
//			{
//				min = arr[i][j];
//			}
//		}
//		int j = m - 2;
//		sum -= (max + min);
//		adv = sum * 1.0 / j ;
//		if (adv > adv_max)
//		{
//			adv_max = adv;
//		}
//	}
//
//	printf("%.2f", adv_max);
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int count = 0;
//    int i = 0;
//    for (i = 0;i < 32;i++)
//    {
//        if ((a & 1) != (b & 1))
//        {
//            count++;
//        }
//        a >>= 1;
//        b >>= 1;
//    }
//    printf("%d", count);
//    return 0;
//}