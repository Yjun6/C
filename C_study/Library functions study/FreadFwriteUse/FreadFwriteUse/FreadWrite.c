#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//打开文件
	FILE* p = fopen("test.bin", "rb");
	//判断文件是否被打开
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	int stu1 = 0;
	size_t i = fread(&stu1, 4, 1, p);

	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}