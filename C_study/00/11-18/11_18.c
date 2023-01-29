



#include<stdio.h>
#include<math.h>

int ss(int i)
{
	int j = 0;
	int jade = 0;

	jade = 1;
	if (i > 2)
	{
		for (j = 2;j <= sqrt(i);j++)
		{
			if (i % j == 0)
			{
				jade = 0;
				break;
			}
		}
	}
	else
	{
		jade = 1;
	}

	return jade;
}
//
//int main()
//{
//	int l = 0;
//	scanf("%d", &l);
//	int sum = 0;
//	int count = 0;
//	int i = 0;
//	int j = 0;
//
//	if (l >= 2)
//	{
//		i = 1;
//		j = 0;
//		while (l >= sum)
//		{
//			if (j == 1)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//			j = 0;
//			i++;
//
//			j = ss(i);
//			if (j == 1)
//			{
//				sum += i;
//			}
//
//		}
//	}
//	
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (j = 0;j < n;j++)
//	{
//		for (i = 1+j*n;i <= n*(j+1) ;i++)
//		{
//			printf("%02d", i);
//		}
//		printf("\n");
//
//	}
//	printf("\n");
//
//	//4 (n-i)*2¸ö¿Õ¸ñ
//	//nÐÐ£¬
//	int z = 0;
//	j = 1;
//	for (i = 1;i <= n;i++)
//	{
//		for (z = n * 2 - i * 2;z > 0;z--)
//		{
//			printf(" ");
//		}
//
//		int c = j;
//		for (;j < c + i;j++)
//		{
//			printf("%02d", j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
