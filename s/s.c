#include<stdio.h>

int is_leap_year(int year, int m)
{
	int day = 0;

	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		case 2:
			break;
		default:
			break;
	}

	if (m == 2)
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
	}

	return day;
}

int main()
{
	int year = 0;//年
	int m = 0;//月
	while ((scanf("%d %d", &year, &m)) != EOF)
	{
		int day = is_leap_year(year, m);
		printf("%d\n", day);
	}
	
	return 0;
}


//int L(int a)
//{
//	//00000000000011
//	//00000000000001  &  ==1 +1
//
//	int i = 0;
//	int count = 0;
//
//	for (i = 0;i < 32;i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a >>=1;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = L(a);
//	printf("%d   ", count);
//	return 0;
//}



////不创建临时变量，交换两个数  2种方法 ^   + -
//
//#include<stdio.h>
//
//void Exchange(int* a, int* b)
//{
//	//1.9+4=13  13-9=4  13-4=9
//	/**a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;*/
//	
//	//2.4^4^9=0^9=9 4^9^4=9 4^9^9=4
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//
//}
//
//int main()
//{
//	int a = 9;
//	int b = 4;
//	Exchange(&a, &b);
//	printf("a = %d  b = %d", a, b);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	//    7   8     7   a=8    b=7
//	b = ++c, c++, ++a, a++;//a=8,b=7,c=8
//	//b+=8+8  a=9,c=8  b=16+7=23
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

////^ 按位异或  相同为0，相异为1
//
////-3
////1000 0000 0000 0000 0000 0000 0000 0011.
////1111 1111 1111 1111 1111 1111 1111 1100
////1111 1111 1111 1111 1111 1111 1111 1101
//
////1111 1111 1111 1111 1111 1111 1111 1000
////1111 1111 1111 1111 1111 1111 1111 0111
////1000 0000 0000 0000 0000 0000 0000 1000
//int main()
//{
//	int a = -3 ^ 5;
//	printf("%d  ", a);//-8
//	return 0;
//}


//int main()
//{
//	int a = 3 | 5;
//	printf("%d  ", a);
//	return 0;
//}

//int main()
//{
//	int a = 3 & 5;
//	printf("%d  ", a);
//	return 0;
//}