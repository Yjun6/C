//#include<stdio.h>
//
//int my_strlen(char* arr)
//{
//	int len = 0;
//	while (*arr != '\0')
//	{
//		len++;
//		arr++;
//	}
//	return len;
//}
//
//void nixu(char* arr, int len)
//{
//	
//
//
//}
//
//
//
//int main()
//{
//	char arr[] = "sagfhjasggjawjka";
//	int len = my_strlen(arr);
//
//	nixu(arr, len);
//	
//
//	return 0;
//}

////·ÇµÝ¹é
//void nixu(char* arr, int len)
//{
//	//len->0 len-1->1...
//	char temp;
//	int i = 0;
//
//	for (i = 0;i < len / 2;i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = temp;
//	}
//
//
//}


//int factorial1(int n)//µÝ¹é
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial1(n - 1);
//	}
//
//}
//
//int factorial2(int n)//·ÇµÝ¹é
//{
//	int i = 1;
//	int sum = 1;
//
//	if (n <= 1)
//	{
//		sum = 1;
//	}
//	else 
//	{
//		for (i = 1;i <= n;i++)
//		{
//			sum *= i;
//		}
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum1 = factorial1(n);//µÝ¹é
//	int sum2 = factorial2(n);//·ÇµÝ¹é
//
//	printf("%d\n", sum1);
//	printf("%d\n", sum2);
//	return 0;
//}

//int Fib1(int n)//µÝ¹é
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//
//}
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int num = 0;
//
//	int i = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 3;i <= n;i++)
//		{
//			num = a + b;
//			a = b;
//			b = num;
//		}
//
//		return num;
//	}
//	
//
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fib1(n);//µÝ¹é
//	int ret2 = Fib2(n);//·ÇµÝ¹é
//
//	printf("%d  \n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}

////2  16
////n==2 3 4 5
////2*2*2*2
//int Fun(2)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}

//int Fib(int n)
//{
//	int sum = 0;
//	int a = 0;
//	int b = 0;
//
//	if (n <= 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		a = 1;
//		b = 1;
//		for (int i = 3;i <= n;i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d  ", ret);
//	return 0;
//}