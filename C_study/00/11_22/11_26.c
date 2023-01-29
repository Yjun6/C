#include<stdio.h>
#include<math.h>

int P = 6;

int main()
{
	int a = 0;
	scanf("%d", &a);
	int sum = 0;
	int summ = 0;

	int i = 0;
	int j = 0;

	for (i = 1;i <= P;i++)
	{
		j = i;
		sum = 0;

		while (j)
		{
			j--;
			summ += a * pow(10, j);
		}
		sum += summ;
	}

	printf("%d", sum);

	return 0;
}


//int Number(int i)
//{
//	int count = 0;
//
//	while (i)
//	{
//		count++;
//		i /= 10;
//	}
//
//	return count;
//}
//
//int Is(int i)
//{
//	int len = Number(i);
//	int j = i;
//	int sum = 0;
//
//	while (j)
//	{
//		sum += pow(j % 10, len);
//		j /= 10;
//		
//	}
//
//	if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	//0-100000
//	int i = 0;
//	int n = 0;
//
//
//
//	for (i = 1;i < 100000;i++)
//	{
//		n = Is(i);
//		if (n == 1)
//		{
//			printf("%d  ", i);
//		}
//
//	}
//
//	return 0;
//}


//E为奇数才符合该代码
// 
//#include<stdio.h>
//
//#define E 19
//
//int main()
//{
//	char p = '*';
//	int i = 0;
//	int j = 0;
//
//	for (i = 1;i <= E;i++)
//	{
//
//		if (i < (E+1)/2)
//		{
//			for (j = E / 2 - i + 1;j > 0;j--)
//			{
//				printf(" ");
//			}
//
//			for (j = 0;j < 2*i-1;j++)
//			{
//				printf("%c", p);
//			}
//			printf("\n");
//		}
//		else if (i == (E + 1) / 2)
//		{
//			for (j = 0;j < E;j++)
//			{
//				printf("%c", p);
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = i- (E + 1) / 2;j > 0;j--)
//			{
//				printf(" ");
//			}
//
//			for (j = (E-i)*2+1;j >0;j--)
//			{
//				printf("%c", p);
//			}
//			printf("\n");
//		}
//
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	if ('\0' == ' ')
//	{
//		printf("hgf");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//void Reverse(char* p, int len)
//{
//	char tmp = 0;
//	if (len > 1)
//	{
//		tmp = *p;
//		*p = *(p + len - 1);
//		*(p + len - 1) = '\0';
//		Reverse(p + 1, len - 2);
//		*(p + len - 1) = tmp;
//	}
//
//}
//
//int my_strlen(char* p)
//{
//	char* pa = p;
//	while (*pa != '\0')
//	{
//		pa++;
//	}
//
//	return pa - p;
//
//}
//
//int main()
//{
//	char arr[1000] = { 0 };
//	scanf("%[^\n]s", &arr);
//
//	int len = my_strlen(arr);
//	Reverse(arr, len);
//
//	printf("%s", &arr);
//
//	return 0;
//}


//#include<math.h>

////写一个函数，可以逆序一个字符串的内容。
//
//#include<stdio.h>
//
//void Reverse(char* p,int len)
//{
//	char tmp = 0;
//	if (len>1)
//	{
//		tmp = *p;
//		*p = *(p + len - 1);
//		*(p + len - 1) = '\0';
//		Reverse(p + 1, len - 2);
//		*(p + len - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "sgfaugsfaj";
//	int len = strlen(arr);
//	Reverse(arr,len);
//
//	int i = 0;
//	/*for (i = 0;i < len;i++)
//	{
//		printf("%c", arr[i]);
//	}*/
//	
//	printf("%s", &arr);
//
//	return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include<stdio.h>
//
//void Print(int* p, int len)
//{
//	int i = 0;
//
//	for (i = 0;i < len;i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, len);
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);// 11223300
//    return 0;
//}

//int main()
//{
//	//5
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//12
//
//							//6      12
//	printf("%d %d", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //            0 0  
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        //
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0;i < 10;i++)
//	{
//		*p++ = i + 1;
//	}
//
//	p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0;i < 10;i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//
//	p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//
//	return 0;
//}

////1. 
//int my_strlen1(char* p)
//{
//	int count = 0;
//
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//
//	return count;
//
//}
//
//
////2.
//int my_strlen2(char* p)
//{
//	char* pa = p;
//	while (*pa != '\0')
//	{
//		pa++;
//	}
//
//	return pa - p;
//
//}
//
//int main()
//{
//	char arr[] = "fgshgfusgh";
//
//	int len1 = my_strlen1(arr);
//	printf("len1 = %d\n", len1);
//
//	int len2 = my_strlen2(arr);
//	printf("len2 = %d\n", len2);
//
//	return 0;
//}

//int main()
//{
//
//
//
//	//int* p = NULL;//NULL 空指针->初始化野指针
//	//*p = 12;//不能直接拿来用
//	//printf("%d\n", *p);
//
//
//	//局部变量 *p 野指针
//	/*int* p;
//	*p = 12;
//	printf("%d\n", *p);*/
//	return 0;
//}