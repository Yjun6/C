#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//���ļ�
	FILE* p = fopen("test.txt", "w");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	//˳��д�ļ�
	for (char i = 'a'; i <= 'z'; i++)
	{
		fputc(i, p);
	}
	//�ر��ļ�
	fclose(p);
	p = NULL;

	return 0;
}