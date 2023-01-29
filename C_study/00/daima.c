#include<stdio.h>

int main()
{
	char arr[14];
	scanf("%s", arr);//arr[12] is 识别码
	int arr1[9] = { 0 };//没有识别码
	int i = 0,j=0,num=0;
	int jade = 0;
	for (i = 0,j = 0;i < 9 && j<14;i++,j++)
	{

		arr1[i] = arr[j] - '0';
		if (i == 0 || i == 3 || i == 8)
		{
			j++;
		}
	}
	for (i = 0;i < 9;i++)
	{
		num += (i + 1) * arr1[i];
	}
	num %= 11;
	if (num != 10) 
	{
		if (num == arr[12]-'0')
		{
			jade = 1;
		}
	}
	else
	{
		if (arr[12] == 'X')
		{
			jade = 1;
		}
	}
	if (jade == 1)
	{
		printf("Right");
	}
	else
	{
		printf("%d-%d%d%d-%d%d%d%d%d-", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5], arr1[6], arr1[7], arr1[8]); 
		if (num != 10)
		{
			printf("%d", num);
		}
		else
		{
			printf("%c", 'X');
		}
	}
	return 0;
}

//err
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int num = 0;
//
//	////scanf("%d-%d%d%d-%d%d%d%d%d-%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);//arr[9]可能为X
//	//for (i = 0;i < 10;i++)//arr[9] is 识别码
//	//{
//	//	scanf("%d", &arr[i]);
//	//	if(i==0||i==3||i==8)
//	//		getchar();
//	//}
//	for (i = 0;i < 9;i++)
//	{
//		num += (i + 1) * arr[i];
//	}
//	num %= 11;
//	if (num==arr[9])
//	{
//		printf("Right");
//	}
//	else
//	{
//		printf("%d-%d%d%d-%d%d%d%d%d-%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], num);//num==X
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	int z = 0;
//	char n[5];
//	//从小到大排序
//	if (arr[0] > arr[1])
//	{
//		z = arr[0];
//		arr[0] = arr[1];
//		arr[1] = z;
//	}
//	if (arr[0] > arr[2])
//	{
//		z = arr[0];
//		arr[0] = arr[2];
//		arr[2] = z;
//	}
//	if (arr[1] > arr[2])
//	{
//		z = arr[1];
//		arr[1] = arr[2];
//		arr[2] = z;
//	}
//	scanf("%s", n);
//	for (int i = 0;i < 3;i++)
//	{
//		if (n[i] == 'A')
//			printf("%d ", arr[0]);
//		if (n[i] == 'B')
//			printf("%d ", arr[1]);
//		if (n[i] == 'C')
//			printf("%d ", arr[2]);
//	}
//	return 0;
//}

////err
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	//从小到大排序
//	int z = 0;
//	if (arr[0] > arr[1])
//	{
//		z = arr[0];
//		arr[0] = arr[1];
//		arr[1] = z;
//	}
//	if (arr[0] > arr[2])
//	{
//		z = arr[0];
//		arr[0] = arr[2];
//		arr[2] = z;
//	}
//	if (arr[1] > arr[2])
//	{
//		z = arr[1];
//		arr[1] = arr[2];
//		arr[2] = z;
//	}
//	char n;//
//	for (int i = 0;i < 3;i++)
//	{
//		scanf("%c", &n);//不能这么写  先输入ABC 再输出数字 
//		if (n == 'A')
//		{
//			printf("%d ", arr[0]);
//		}
//		if (n == 'B')
//		{
//			printf("%d ", arr[1]);
//		}
//		if (n == 'C')
//		{
//			printf("%d ", arr[2]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	double a = 0.555;
//	float b = 0.555f;
//	printf("%.2lf  %.2f\n", a, b);
//	a = 1.555;
//	b = 1.555f;
//	printf("%.2lf  %.2f\n", a, b);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//int is_prime_number(int n)
//{
//	int i = 0;
//	int jade = 1;
//	for (i = 2;i <= pow(n, 0.5);i++)
//	{
//		if (n % i == 0)//不是素数
//		{
//			jade = 0;
//			break;
//		}
//	}
//	return jade;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = is_prime_number(n);
//	if (a == 1)
//	{
//		printf("%d是素数\n", n);
//	}
//	else
//	{
//		printf("%d不是素数\n", n);
//	}
//	for (int i = 100;i <= 200;i++)
//	{
//		a = is_prime_number(i);
//		if (a == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//int is_leap_year(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int n = is_leap_year(year);
//	if (n == 1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}

//void exchange(int* a, int* b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	int i = 0,j=0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d * %d = %d  ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}//1,4;2,7;3,10;4,13;5,16;6,19;7,22;8,22
//		b = b - 5;
//	}
//	printf("%d\n", a);//8
//	return 0;
//}

//int a = 1;
//void _1() {
//	a = 2;
//}
//int main()
//{
//	_1();
//	printf("%d", a);//a==2
//	return 0;
//}/

//int is_leap_year(int year) 
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 0;
//	return 1;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int n=is_leap_year(year);
//	if (n == 0) {
//		printf("是闰年");
//	}
//	else {
//		printf("不是闰年");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int arr[10];
//	int h = 0;
//	for (i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &h);
//	h += 30;
//	for (i = 0;i < 10;i++) {
//		if (h >= arr[i])
//			sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}