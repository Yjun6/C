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

	//ʹp����ƫ��
	fseek(p, 2, SEEK_CUR);//2��ָ���±�2
	char ch = fgetc(p);//c

	//��ӡƫ����
	printf("%d \n", ftell(p));//3

	//ʹpƫ�����ָ�Ϊ��ʼֵ
	rewind(p);
	ch = fgetc(p);
	printf("%c\n", ch);//a
	printf("%d\n", ftell(p));//1

	fclose(p);
	p = NULL;
	return 0;
}