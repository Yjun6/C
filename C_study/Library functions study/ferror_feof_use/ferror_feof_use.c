#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//���ļ�test.txt û���򴴽�һ���µ��ļ�
	FILE* p = fopen("test.txt", "rb");
	//���ļ���ȡ���ַ�
	//ֱ��getc��ȡp����
	//�ļ�������־��EOF
	while (getc(p) != EOF)
		;
	//�ж϶�ȡ��ɵ�ԭ��
	if (ferror(p))
	{
		printf("��ȡ���󣬳����쳣��\n");
	}
	else if (feof(p))
	{
		printf("��ȡ����������\n");
	}
	//�ر��ļ�
	fclose(p);
	p = NULL;

	return 0;
}