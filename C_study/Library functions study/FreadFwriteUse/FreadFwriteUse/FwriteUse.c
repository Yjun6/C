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
	//���ļ�
	FILE* p = fopen("test.bin", "wb");
	//�ж��ļ��Ƿ񱻴�
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	stu stu1 = {"��־��", 19, 256};
	fwrite((void*)&stu1, sizeof(stu), 1, p);

	//�ر��ļ�
	fclose(p);
	p = NULL;

	return 0;
}