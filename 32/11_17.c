#include<stdio.h>


int main()
{
	double s = 0.0;
	double s1 = 0.0;
	scanf("%lf", &s);
	

	int count = 1;
	
	s1 = 2;
	if (s > 2)
	{
		s -= 2;
		while (s >= 0)
		{
			count++;
			s1 = s1 * 0.98;
			s -= s1;
		}
	}
	//2 *0.98 

	printf("%d", count);

	return 0;
}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int j = 0;
//
//	while (n>0)
//	{
//		j = i;
//		for (i = j;i <= j + n - 1;i++)
//		{
//			printf("%02d", i);
//		}
//		printf("\n");
//		n--;
//	}
//
//
//
//	//printf("%02d", 5);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int max = 0, min = 0;
//	double adv = 0.0;
//
//	int tmp = 0;
//	scanf("%d", &sum);
//	max = sum;
//	min = sum;
//
//	for (i = 1;i < n;i++)
//	{
//		scanf("%d", &tmp);
//		sum += tmp;
//		if (max < tmp)
//		{
//			max = tmp;
//		}
//		if (min > tmp)
//		{
//			min = tmp;
//		}
//	}
//	sum -= (max + min);
//	adv = sum * 1.0 / (n - 2);
//	printf("%.2lf", adv);
//
//	return 0;
//}
//


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	long long sum = 0;
//
//	for (i = 1;i <= n;i++)
//	{
//		sum += i;
//	}
//
//	printf("%lld", sum);
//
//	return 0;
// }
 
 
 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp = 0;
//	int max = 0, min = 0;
//
//	scanf("%d", &max);
//	min = max;
//	for (i = 1;i < n;i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//		if (tmp < min)
//		{
//			min = tmp;
//		}
//		
//	}
//
//	printf("%d", max - min);
//
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//     //         
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);//
//    return 0;
//}