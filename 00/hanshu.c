#include<stdio.h>
#include<ctype.h>//isalpha()������ͷ�ļ�
//#include<string.h>

//isalpha()����   �жϸ��ַ��ǲ�����ĸ 
//��д��ĸ����1   Сд��ĸ����0  ������ĸ����0  ���㼴Ϊ��
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


////memset()����
//int main()
//{
//	char arr[] = "hafgshfawyfm";
//	memset(arr, '*', 6);
//	printf("%s\n", arr);
//	//******fawyfm
//	return 0;
//}


//strcpy()����
//int main()
//{
//	char arr1[20] = "jgffryawu";
//	char arr2[] = "fsjhfjs";
//	char* ret=strcpy(arr1, arr2);//arr1��Ŀ�ĵ� arr2��Ҫ��copy������
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
