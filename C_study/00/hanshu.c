#include<stdio.h>
#include<ctype.h>//isalpha()函数的头文件
//#include<string.h>

//isalpha()函数   判断该字符是不是字母 
//大写字母返回1   小写字母返回0  不是字母返回0  非零即为真
int main()
{
	int a = isalpha('B');//1
	//int a = isalpha('A');//1
	//int a = isalpha('b');//2
	//int a = isalpha('a');//2
	//int a = isalpha(4);//0
	//int a = isalpha('*');//0
	printf("%d", a);
	return 0;
}


////memset()函数
//int main()
//{
//	char arr[] = "hafgshfawyfm";
//	memset(arr, '*', 6);
//	printf("%s\n", arr);
//	//******fawyfm
//	return 0;
//}


//strcpy()函数
//int main()
//{
//	char arr1[20] = "jgffryawu";
//	char arr2[] = "fsjhfjs";
//	char* ret=strcpy(arr1, arr2);//arr1是目的地 arr2是要求copy的内容
//	printf("%s\n", arr1);//fsjhfjs
//	printf("%s\n", ret);//fsjhfjs
//	printf("%p\n", arr1);
//	printf("%p\n", arr2);
//	printf("%p\n", ret);
//	/*007FFB74
//	007FFB64
//	007FFB74*/
//	//ret==arr1
//	return 0;
//}
