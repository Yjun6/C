#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//打开文件test.txt 没有则创建一个新的文件
	FILE* p = fopen("test.txt", "rb");
	//从文件中取出字符
	//直到getc读取p结束
	//文件结束标志是EOF
	while (getc(p) != EOF)
		;
	//判断读取完成的原因
	if (ferror(p))
	{
		printf("读取错误，出现异常！\n");
	}
	else if (feof(p))
	{
		printf("读取正常结束！\n");
	}
	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}