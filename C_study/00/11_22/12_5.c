//#include<stdio.h>
//
//int main()
//{
//	char arr[20] = { 0 };
//	printf("%s\n", gets(arr));
//	printf("%s\n", arr);
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	char arr[20] = { 0 };
	scanf("%[^\n]s", &arr);
	printf("%s\n", arr);

	return 0;
}