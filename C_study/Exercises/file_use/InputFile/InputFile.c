#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//打开文件
	FILE* p = fopen("test.txt", "w");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	//顺序写文件
	for (char i = 'a'; i <= 'z'; i++)
	{
		fputc(i, p);
	}
	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}