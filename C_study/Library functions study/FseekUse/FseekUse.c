#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* p = fopen("test.txt", "r");//a b c d e
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	//使p发生偏移
	fseek(p, 2, SEEK_CUR);//2是指的下标2
	char ch = fgetc(p);//c

	//打印偏移量
	printf("%d \n", ftell(p));//3

	//使p偏移量恢复为初始值
	rewind(p);
	ch = fgetc(p);
	printf("%c\n", ch);//a
	printf("%d\n", ftell(p));//1

	fclose(p);
	p = NULL;
	return 0;
}