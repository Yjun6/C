#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	double a = 0.0, b = 0.0;
//	char c = 0;
//	scanf("%lf%c%lf", &a, &c, &b);
//	switch (c)
//	{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//			break;
//		case '/':
//			if (b == 0)
//				printf("Wrong!Division by zero!");
//			else
//				printf("%.4lf/%.4lf=%.4lf", a, b, (a * 1.0 / b));
//			break;
//		default:
//			printf("Invalid operation!");
//			break;
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0, j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int arr1[1000] = { 0 };
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	arr1[0] = arr[0];
//	int jade = 0;
//	int a = 1;
//	for (i = 1;i < n;i++)
//	{
//		jade = 0;
//		for (j = i - 1;j >= 0;j--)
//		{
//			if (arr[i] == arr[j])
//			{
//				jade = 1;
//				break;
//			}
//		}
//
//		if (jade != 1)
//		{
//			arr1[a] = arr[i];
//			a++;
//		}
//
//	}
//
//	for (i = 0;i < a;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0, j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int arr1[1000] = { 0 };
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	arr1[0] = arr[0];
//	int jade = 0;
//	int a = 1;
//	for (i = 1;i < n;i++)
//	{
//		jade = 0;
//		for (j = i - 1;j >= 0;j--)
//		{
//			if (arr[i] == arr[j])
//			{
//				jade = 1;
//				break;
//			}
//		}
//		
//		if (jade != 1)
//		{
//			arr1[a] = arr[i];
//			a++;
//		}
//
//	}
//
//	for (i = 0;i < a;i++)
//	{
//		arr[i] = arr1[i];
//	}
//
//	for (i = 0;i < a;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0;
//	int jade = 0;
//	while (scanf("%lf %lf %lf",&a,&b,&c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			jade = b * b - 4 * a * c;
//			if (jade == 0)
//			{
//				double i = 0.0;
//				if (b == 0)
//					i = 0;
//				else
//					i = -1.0 * b / (2 * a);
//				printf("x1=x2=%.2lf\n", i);
//			}
//			else if (jade > 0)
//			{
//				double i = 0.0, j = 0.0;
//				i = (-1.0 * b - pow(jade, 0.5)) / (2 * a);
//				j = (-1.0 * b + pow(jade, 0.5)) / (2 * a);
//				printf("x1=%.2lf;x2=%.2lf\n", i,j);
//			}
//			else
//			{
//				//x1=实部-虚部i;x2=实部+虚部i，
//				// 即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。
//				//实部= -b / (2*a),虚部= sqrt(-△ ) / (2*a)
//				double a1 = -1.0 * b / (2 * a);//实部
//				double b1 = sqrt(-1.0 * jade) / (2 * a);//虚部
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", a1, b1, a1, b1);
//
//			}
//
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
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				printf("%c ", '*');
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0, j = 0;
//        for (i = 0;i < n;i++)
//        {
//            //图案
//            for (j = 0;j < n-i;j++)
//            {
//                printf("%c ", '*');
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
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0, j = 0;
//        for (i = 1;i <= n;i++)
//        {
//            //图案
//            for (j = 0;j < i;j++)
//            {
//                printf("%c ", '*');
//            }
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}

//int main() 
//{
//    int n = 0;
//    while (scanf("%d", &n)!= EOF)
//    {
//        int i = 0, j = 0;
//        for (i = 1;i <= n;i++)
//        {
//            //空格
//            for (j = 0;j < n - i;j++)
//            {
//                printf("  ");
//            }
//                       
//            //图案
//            for (j = 0;j < i;j++)
//            {
//                printf("%c ", '*');
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
//    while (scanf("%d", &n)!=EOF)
//    {
//        int i = 0, j = 0;
//
//        for (i = 0;i < n;i++)
//        {
//            //空格
//            for (j = 0;j < i;j++)
//            {
//                printf(" ");
//            }
//
//            //图案
//            for (j = 0;j < n - i;j++)
//            {
//                printf("%c ", '*');
//            }
//            printf("\n");
//
//        }
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0;j < m;j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    scanf("%d %d", &i, &j);
//    i -= 1;
//    j -= 1;
//    printf("%d ", arr[i][j]);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//
//    //上半部分
//    for (j = 0;j < n;j++)
//    {
//        for (i = n - j;i >= 0;i--)
//        {
//            printf("%c ", '*');
//        }
//        printf("\n");
//    }
//
//    //中间
//    printf("%c\n", '*');
//
//    //下半部分
//    for (j = 1;j <= n;j++)
//    {
//        for (i = 0;i <=j;i++)
//        {
//            printf("%c ", '*');
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	char c = 0;
//	while (scanf("%c", &c) != EOF)
//	{
//		getchar();
//		if (c <= 'z' && c >= 'a')
//		{
//			c -= 32;
//		}
//		else
//		{
//			c += 32;
//		}
//
//		printf("%c\n", c);
//	}
//
//	return 0;
//}


//
//#include <stdio.h>
//
//int is(int n)
//{
//	int j = 0;
//	j = (n / 10000) * (n % 10000) + (n / 1000) * (n % 1000)
//		+ (n / 100) * (n % 100) + (n / 10) * (n % 10);
//
//	if (n == j)
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int jade = 0;
//	for (i = 10000;i < 100000;i++)
//	{
//		jade = is(i);
//		if (jade == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int is(int n)
//{
//	int j = 0;
//	int i = 10000;
//	while (i)
//	{
//		j += (n / i) * (n % i);
//		i /= 10;
//	}
//	 
//	if (n == j)
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int jade = 0;
//	for (i = 10000;i < 100000;i++)
//	{
//		jade = is(i);
//		if (jade == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//void sort(int* arr, int n)
//{
//    int i = 0;
//    int tmp = 0;
//    for (i = 0;i < 5;i++)
//    {
//        int j = 0;
//        for (j = i + 1;j < n;j++)
//        {
//            if (arr[i] < arr[j])
//            {
//                tmp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = tmp;
//            }
//        }
//    }
//
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    for (i = 0;i < n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    sort(arr, n);
//    for (i = 0;i < 5;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}


#include<stdio.h>

void sort(int* arr, int len)
{
	int i = 0, j = 0;
	int tmp = 0;
	for (i = 0;i < len - 1;i++)
	{
		for (j = i + 1;j < len;j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int tmp = 0;
	int i = 0, j = 0;
	//输入
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &arr[n]);
	
	sort(arr, n + 1);

	//输出
	for (i = 0;i < n + 1;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}