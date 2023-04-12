#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct stu
{
	char name[20];
	int age;
	int classroom;
}stu;

int main()
{
	//打开文件
	FILE* p = fopen("test.bin", "wb");
	//判断文件是否被打开
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	stu stu1 = {"黄志文", 19, 256};
	fwrite((void*)&stu1, sizeof(stu), 1, p);

	//关闭文件
	fclose(p);
	p = NULL;

	return 0;
}