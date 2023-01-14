#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main()
//{
//	double kg = 0.0, m = 0.0;
//	while (scanf("%lf %lf", &kg, &m) != EOF)
//	{
//		if ((kg * 1.0 / (m * 0.01 * 0.01 * m)) >= 18.5
//			&& (kg * 1.0 / (m * 0.01 * 0.01 * m)) <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if ((kg * 1.0 / (m * 0.01 * 0.01 * m)) < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if ((kg * 1.0 / (m * 0.01 * 0.01 * m)) > 23.9
//			&& (kg * 1.0 / (m * 0.01 * 0.01 * m)) <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//
//	}
//
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	double kg = 0.0, m = 0.0;
//	scanf("%lf %lf", &kg, &m);
//	if ((kg * 1.0 / (m * m)) >= 18.5
//		&& (kg / (m * m)) <= 23.9)
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m = 0, h = 0;
//    int count = 0;
//
//    while (scanf("%d %d %d", &n, &m, &h) != EOF)
//    {
//        if (h % m != 0)
//        {
//            count = n - (h / m + 1);
//        }
//        else
//        {
//            count = n - h / m;
//        }
//    }
//
//    printf("%d", count);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    char c = 0;
//    while (scanf("%c", &c ) != EOF)
//    {
//        getchar();
//        if (c == 'A' || c == 'a' || c == 'e' || c == 'E'
//            || c == 'i' || c == 'I' || c == 'O' || c == 'o'
//            || c == 'u' || c == 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//
//    }
//
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0;
//	int sum = 0;
//	scanf("%x %o", &a, &b);
//	sum = a + b;
//	printf("%d", sum);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", (1 << n));
//
//	return 0;

//#include<stdio.h>
//
//int main()
//{
//	char c = 0;
//	int i = 0, j = 0;
//	scanf("%c", &c);
//	while (c != '0')
//	{
//		if (c == 'A')
//		{
//			i++;
//		}
//		else if (c == 'B')
//		{
//			j++;
//		}
//		scanf("%c", &c);
//	}
//
//	if (i > j)
//	{
//		printf("%c", 'A');
//	}
//	else if (i < j)
//	{
//		printf("%c", 'B');
//	}
//	else
//	{
//		printf("%c", 'E');
//	}
//
//	return 0;
//}
// 
//#include<stdio.h>
//#include<math.h>
//
//#define E 3.1415926
//
//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	double v = 4 * 1.0 / 3 * E * r * r * r;
//	printf("%.3lf", v);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double C = a + b + c;
//	double p = C * 1.0 / 2;
//	double S = pow(p * (p - a) * (p - b) * (p - c), 0.5);
//
//	printf("circumference=%.2lf area=%.2lf", C, S);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int max = 0, a = 0, b = 0;
//
//    int i = 0, j = 0;
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                a = i + 1;
//                b = j + 1;
//            }
//        }
//    }
//
//    printf("%d %d", a, b);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    char c = '*';
//
//    while ((scanf("%d", &n)) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        //上一部分
//        for (i = 0;i < n;i++)
//        {
//            // 空格  
//            for (j = 0;j < n - i;j++)
//            {
//                printf(" ");
//            }
//           //图案
//            for (j = 0;j <= i;j++)
//            {
//                printf("%c ", c);
//            }
//            printf("\n");
//        }
// 
//        //中间
//        //图案
//        for (i = 0;i <= n;i++)
//        {
//            printf("%c ", c);
//        }
//        printf("\n");
//        //下一部分
//        for (i = 0;i < n;i++)
//        {
//            // 空格  
//            for (j = 0;j <= i;j++)
//            {
//                printf(" ");
//            }            
//            //图案
//            for (j = 0;j < n - i;j++)
//            {
//                printf("%c ",c);
//            }
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    char c = '*';
//
//    while ((scanf("%d", &n)) != EOF)
//    {
//        int i = 0;
//        for (i = 1;i <= n;i++)
//        {
//            int j = 0;
//            //空格
//            for (j = 0;j < n - i;j++)
//            {
//                printf(" ");
//            }
//            //图案
//            for (j = 0;j < i;j++)
//            {
//                printf("%c ", c);
//            }
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//    int year = 0;
//    scanf("%d", &year);
//    long long h = year * (pow(10, 7)) * 3.156;
//    printf("%lld", h);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    double a = 0.0;
//    scanf("%lf", &a);
//    printf("%d", ((int)a % 10));
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char arr[5] = { 0 };
//    scanf("%s", &arr);
//    for (int i = 3;i >= 0;i--)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%d", a);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("%15d", 0XABCDEF);
//	return 0;
//}


#include<stdio.h>

int main()
{
	double val = 0.0;//衣服价格
	int m = 0, day = 0;//时间
	int is_no = 0;//是否有卷
	scanf("%lf %d %d %d", &val, &m, &day, &is_no);
	
	if (day == 11)
	{
		val *= 0.7;
	}
	else
	{
		val *= 0.8;
	}

	if (is_no == 1)
	{
		val -= 50;
	}

	if (val > 0)
		printf("%.2lf", val);
	else
		printf("%.2lf", 0);

	return 0;
}
