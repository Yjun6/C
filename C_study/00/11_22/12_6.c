//#include<stdio.h>
//
//int main()
//{
//	int a = 11;
//	int count = 0;
//
//	while (a)
//	{
//		count++;
//		a &= (a - 1);
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a = -1;
	int count = 0;
	int i = 32;

	while (i&&a)
	{
		if ((a & 1) == 1)
		{
			count++;
		}
		a >>= 1;
		i--;
	}

	printf("%d\n", count);
	return 0;
}

//int main()
//{
//	int a = 10;
//	int count = 0;//������1�ĸ����洢
//
//	while (a)
//	{
//		//��������������Ǹ�����1
//		if (a % 2 != 0)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//
//	printf("%d\n", count);
//	return 0;
//}