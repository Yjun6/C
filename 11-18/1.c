#include<stdio.h>



//int main()
//{
//	int b = 3, a;
//	a = 2;
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (!a)
//	{
//		printf("7252687");
//	}
//	if (a == 0)
//	{
//		printf("    sjgkh");
//	}
//	if (a!=0)
//	{
//		printf("\ndgrg");
//	}
//	/*switch (a)
//	{
//		case b+1:
//			break;
//	}*/
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 1234;
//    printf("%o %x", a, a);
//    return 0;
//}


//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}


void Sort(int arr[], int len)//Ã°ÅÝÅÅÐò  ÉýÐò
{
	int i = 0;
	int j = 0;
	int jade = 0;

	int tmp = 0;
	for (i = 0;i < len - 1;i++)//ÅÅÐòÌËÊý
	{
		jade = 0;
		for (j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				jade = 1;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

		if (jade == 0)
		{
			break;
		}

	}


}

int main()
{
	int i = 0;
	int arr[] = { 1,43,21,43,2,45,76,22,4,5,7,22 };
	int len = sizeof(arr) / sizeof(arr[0]);

	Sort(arr, len);

	for (i = 0;i < len;i++)
	{
		printf("%d  ", arr[i]);

	}

	return 0;
}