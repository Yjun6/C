#include<stdio.h>

int my_1_strlen(char* c)//递归
{
	if (*c != '\0')
	{
		return 1 + my_1_strlen(c + 1);
	}
	else
	{
		return 0;
	}
}

int my_2_strlen(char* c)//非递归
{
	int len = 0;
	while (*c != '\0')
	{
		len++;
		c++;
	}
	return len;
}

int main()
{
	char c[] = "dsghnzfd ghas";
	int len1 = my_1_strlen(c);//递归
	int len2 = my_2_strlen(c);//非递归
	printf("%d \n", len1);
	printf("%d \n", len2);
	return 0;
}

//int DigitSum(int n)
//{
//	//n%10 n/10 n>=10
//	if (n >= 10)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d ", sum);
//	return 0;
//}

//int recurrence(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * recurrence(n, k - 1);
//	}
//	else 
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int sum = recurrence(n, k);
//	printf("%d ", sum);
//	return 0;
//}



//#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//    //2 3 4
//    //2 2 2
//}



//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr+1);
//	//不能写 arr++ 会报错
//	return 0;
//
//}
//
//int main()
//{
//	char arr[] = "sygfdjsa";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	arr2[0] = 0;
//	for (i = 1;i < n;i++)
//	{
//		count = 0;
//		for (int j = 0;j < i;j++)
//		{
//			if ( arr1[j] < arr1[i])
//				count++;
//		}
//		arr2[i] = count;
//	}
//	for (i = 0;i < n;i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int min = 0;
//	int arr[5000] = { 0 };
//	int i = 0,j=0;
//	scanf("%d %d", &n, &m);
//	int min1 = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < m;i++)
//	{
//		min += arr[i];
//	}
//	for (i = 1;i < n-m;i++)
//	{
//		min1 = 0;
//		for (j = i;j < i + m;j++)
//		{
//			min1 += arr[j];
//		}
//		if (min1 < min)
//			min = min1;
//	}
//	printf("%d", min);
//	return 0;
//}

//关于 const 修饰指针  指针常量
//int main()
//{
//	
//	int a = 10;
//	int b = 0;
////	const int* p = &a;
////	//*p = 13;//err *p 不能被修改
////	p = &b;
//
//	int* const p = &a;
//	*p = 13;
//	//p = &b;//err p 不能被修改
//	printf("%d", *p);//13
//	return 0;
//}

////关于 const 修饰变量
//int main()
//{
//	const  int a = 10;
//	/*a = 112;*///err a不能被修改
//	/*int arr[a] = { 0 };*///err a本质是变量
//	printf("%d ", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3.14e3;
//	printf("%d   ", a);//3140
//	a = 312e5;
//	printf("%d   ", a);//31200000
//
//	/*int a = 0;
//	scanf("%d", &a);*/
//	return 0;
//}