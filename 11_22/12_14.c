#include<stdio.h>
//#include <stdio.h>
//
//int main()
//{
//    printf("Practice makes perfect!");
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    printf("v   v\n");
//    printf(" v v\n");
//    printf("  v");
//
//    return 0;
//}

//#include<stdio.h>
//
//
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

//#include <stdio.h>
//
//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.", sizeof(long long));
//
//    return 0;
//}

//û������˳��,ֻ������һ��ż����������˳��
#include<stdio.h>

struct Stu
{
	char name[10];
	int age;
}Stu;
//Stu ȫ�ֽṹ�����

typedef struct stu
{
	char name[10];
	int age;
}stu;
//stu ����

void move(int arr[], int len)
{
	int i = 0;
	//���ֲ��ҷ�
	//������ǰ��ż���ں�
	int left = 0;//��
	int right = len - 1;//��
	while (left < right)
	{
		while ((left < right)&&(arr[left] % 2 != 0))
		{
			left++;
		}

		while ((left < right)&&(arr[right] % 2 == 0))
		{
			right--;
		}

		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}

int main()
{
	stu s1;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < len;i++)
	{
		scanf("%d", &arr[i]);
	}

	move(arr,len);

	for (i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}