#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//���ļ�
	FILE* p = fopen("test.bin", "rb");
	//�ж��ļ��Ƿ񱻴�
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	int stu1 = 0;
	size_t i = fread(&stu1, 4, 1, p);

	//�ر��ļ�
	fclose(p);
	p = NULL;

	return 0;
}