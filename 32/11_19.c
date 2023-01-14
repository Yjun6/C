
//#include<stdio.h>
//#include<math.h>
//
////求数字长度
//int my_len(long long a)
//{
//	int count = 0;
//	while (a>0)
//	{
//		count++;
//		a /= 10;
//	}
//
//	return count;
//}
//
////是否是回文数
//int hws(long long a)
//{
//	int jade = 1;
//	long long b = 0;
//
//	int len = my_len(a);
//	//a%10 a/pow(10,len-1)  
//	while (len>1)
//	{
//		jade = 1;
//
//		len--;
//
//		b = pow(10, len);
//		if (a % 10 != a / b)
//		{
//			jade = 0;
//		}
//
//		if (jade == 0)
//		{
//			break;
//		}
//
//		a %= b;
//		a /= 10;
//		
//		len = my_len(a);
//
//	}
//
//	return jade;
//}
//
//int ss(long long i)
//{
//	int jade = 1;
//	long long a = 0;
//
//	for (a = 2;a <= sqrt(i);a++)
//	{
//		if (i % a == 0)
//		{
//			jade = 0;
//			break;
//		}
//	}
//
//	return jade;
//
//}
//
//int main()
//{
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//
//	int jade = 0;
//	int ss_jade = 0;
//	for (long long i = a;i <= b;i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//
//		jade = hws(i);
//		if (jade == 1)
//		{
//
//			ss_jade=ss(i);
//			if (ss_jade == 1)
//			{
//				printf("%d\n", i);
//			}
//		}
//
//	}
//
//	
//	return 0;
//}

#include<stdio.h>

int main()
{
	long long a = 0;
	scanf("%lld", &a);
	//a/2 a/2 a/2 
	long long count = 1;

	while (a > 1)
	{
		a /= 2;
		count++;
	}

	printf("%lld", count);
	return 0;
}


//每次整除要取整，所以有些实例过不去
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	long long a = 0;
//	scanf("%lld", &a);
//	double i = log2(a);
//	int n = 0;
//
//	if (a > 1)
//	{
//		if (i > (int)i)
//		{
//			n = i + 1;
//		}
//		else
//		{
//			n = i;
//		}
//	}
//	else
//	{
//		n = 0;
//	}
//	printf("%d", n);
//
//	return 0;
//}
