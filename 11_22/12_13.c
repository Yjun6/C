////模拟实现库函数strcpy
//
//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy(char* arr,const char* str)
//{
//	//断言
//	assert(arr && str);
//	while (*arr++ = *str++)
//		;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	char str[] = "jkdjghjszsfkas";
//	my_strcpy( arr, str);
//	printf("%s\n", arr);
//
//	return 0;
//}
 
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include<assert.h>
//
//unsigned int my_strlen(const char* arr)
//{
//	unsigned int count = 0;
//	//断言
//	assert(*arr != NULL);
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "shfasg";
//	printf("%d\n", my_strlen(arr));//链式访问
//
//	return 0;
//}

#include<stdio.h>

void print(int a)
{
	int jade = 0;

	if (a > 0)
	{
		jade = 1;
	}
	else
	{
		jade = -1;
		printf("-");
	}
	a *= jade;

	while (a % 10 == 0)
	{
		a /= 10;
	}
	
	while (a)
	{
		printf("%d", a % 10);
		a /= 10;
	}

}

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a != 0)
	{
		print(a);
	}
	else
	{
		printf("0");
	}

	return 0;
}