#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define E 3.14

int main()
{
	int a = 0, b = 0;
	int r = 0, c = 0;
	int sum1, sum2, sum3;

	scanf("%d %d", &a, &b);
	sum1 = a * b;

	scanf("%d", &r);
	sum2 = E * r * r;

	scanf("%d", &c);
	sum3 = c * c;

	printf("%d %d %d", sum1, sum2, sum3);

	return 0;
}

//#include<stdio.h>
//int main() {
//    long long m, n;
//    scanf("%d %d", &m, &n);
//    long long p = m * n;
//    while (n != 0) {
//        long long t = m % n;
//        m = n;
//        n = t;
//    }
//    long long max = m;
//    long long min = p / m;
//    printf("%lld", max + min);
//}


//#include <stdio.h>
//
//long long a(int n, int m)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= m;i++)
//	{
//		if (i * n % m == 0)
//			return i * n;
//	}
//	z
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		long long sum = a(n, m);
//
//		printf("%lld\n", sum);
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[8005] = { 0 };
//	scanf("%s", arr);
//	long long c = 0, ch = 0, chn = 0;
//	char* p = arr;
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//		{
//			ch += c;
//		}
//		else if (*p == 'N')
//		{
//			chn += ch;
//		}
//		p++;
//	}
//
//	printf("%lld", chn);
//
//	return 0;
//}

//int main()
//{
//    long c = 0;
//    long ch = 0;
//    long chn = 0;
//    char arr[8000] = { 0 };
//    char* p = arr;
//    gets(arr);
//    while (*p)
//    {
//        if (*p == 'C')
//            c++;
//        else if (*p == 'H')
//            ch = ch + c;
//        else if (*p == 'N')
//            chn = chn + ch;
//        p++;
//    }
//    printf("%ld", chn);
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//long long number(const char* arr);
//long long H(char* arr, long long len);
//long long N(char* arr, long long len);
//
////C
//long long number(const char* arr)
//{
//	long long len = strlen(arr);
//	long long i = 0;
//	long long sum = 0;
//	for (i = 0;i < len - 2;i++)
//	{
//		if (*(arr + i) == 'C')
//		{
//			sum += H(arr + i + 1, len - i - 1);
//		}
//
//	}
//
//	return sum;
//}
//
////H
//long long H(char* arr, long long len)
//{
//	long long i = 0;
//	long long sum = 0;
//	for (i = 0;i < len - 1;i++)
//	{
//		if (*(arr + i) == 'H')
//		{
//			sum += N(arr + i + 1, len - i - 1);
//		}
//
//	}
//
//	return sum;
//}
//
////N
//long long N(char* arr, long long len)
//{
//	long long i = 0;
//	long long sum = 0;
//	for (i = 0;i < len;i++)
//	{
//		if (*(arr + i) == 'N')
//		{
//			sum++;
//		}
//
//	}
//
//	return sum;
//}
//
//int main()
//{
//	//输入
//	char arr[8005] = { 0 };
//	scanf("%s", arr);
//
//	//判断
//	long long count = 0;//计算CHN的个数
//
//	count = number(arr);
//
//	printf("%lld\n", count);
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int prime(int n)
//{
//	int i = 2;
//	for (i = 2;i <= sqrt(n);i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i < 1000;i++)
//	{
//		int jade = prime(i);
//		if (jade == 1)
//			count++;
//	}
//
//	printf("%d\n", count);
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
//    int arr[n];
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

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int jade = 1;
//	for (i = 1;i < n;i++)
//	{
//		for (j = 0;j < i;j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				jade = 0;
//				break;
//			}
//		}
//		if (jade == 0)
//			break;
//	}
//
//	if (jade == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%d %d %d", &year, &month, &day);
//	printf("%d/%d/%d", day, month, year);
//
//	return 0;
//}


//int main()
//{
//    int tmp = 0;
//    int max = 0;
//    scanf("%d", &tmp);
//    max = tmp;
//    for (int i = 0;i < 2;i++)
//    {
//        scanf("%d", &tmp);
//        if (tmp > max)
//            max = tmp;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//
//int main()
//{
//    int arr[4] = { 0 };
//    double sum = 0.0;
//    int i = 4;
//    for (i = 0;i < 4;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    sum = arr[0] * 0.2 + arr[1] * 0.1 + arr[2] * 0.2 + arr[3] * 0.5;
//    printf("%.1lf", sum);
//
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        n--;
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}

//int main()
//{
//
//    printf("printf(\"hello world!\\n\");\n");
//    printf("cout << \"hello world!\" << endl;\n");
//
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//
//    int i = 0;
//    for (i = 0;i < n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int tmp = 0;
//    scanf("%d", &tmp);
//
//    int count = 0;
//    for (i = 0;i < n;i++)
//    {
//        if (arr[i] == tmp)
//            count++;
//    }
//
//    printf("%d\n", count);
//
//    return 0;
//}

//int max(int a, int b, int c)
//{
//	int Max = a > b ? a : b;
//	Max = Max > c ? Max : c;
//	return Max;
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double m = max(a + b, b, c) * 1.0
//		/ (max(a, b + c, c) + max(a, b, b + c));
//	printf("%.2lf", m);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int num = 1;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 1;i <= n;i++)
//	{
//		num = 1;
//		for (j = 1;j <= i;j++)
//		{
//			num *= j;
//		}
//		sum += num;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	scanf("%d", &tmp);
//	max = tmp;
//	n--;
//
//	while (n)
//	{
//		n--;
//		scanf("%d", &tmp);
//		if (tmp > max)
//			max = tmp;
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0, j = 0;
//    int tmp = 0;//学生成绩
//    int count = 0;//需要请家长数
//    int sum = 0, adv = 0;//总分和平均分
//    for (i = 0;i < n;i++)
//    {
//        sum = 0;
//        adv = 0;
//        for (j = 0;j < 3;j++)
//        {
//            scanf("%d", &tmp);
//            sum += tmp;
//        }
//        adv = sum / 3;
//        if (adv < 60)
//            count++;
//    }
//
//    printf("%d\n", count);
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 100)
//		printf("F\n");
//	else if (n >= 90)
//		printf("A\n");
//	else if (n >= 80)
//		printf("B\n");
//	else if (n >= 70)
//		printf("C\n");
//	else if (n >= 60)
//		printf("D\n");
//	else if (n >= 0)
//		printf("E\n");
//	else
//		printf("F\n");
//
//	return 0;
//}


//int main()
//{
//	int sum = 0, n = 0;
//	for (int i = 0;i < 3;i++)
//	{
//		scanf("%d", &n);
//		sum += n;
//	}
//	
//	if (sum / 3 >= 60)
//		printf("NO\n");
//	else
//		printf("YES\n");
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int max = 0;
//	int n = 0;
//	scanf("%d", &n);
//	max = n;
//	for (int i = 1;i < 4;i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//
//	}
//
//	printf("%d", max);
//
//	return 0;
//}