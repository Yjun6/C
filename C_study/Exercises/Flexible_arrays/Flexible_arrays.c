#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct s1
{
	int arr;
	char arr2[];//��������
};

int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("++++++++++\n");

	//�����ڴ�ռ�
	struct s1* p = (struct s1*)malloc(sizeof(int) + 10 * sizeof(char));
	if (p == NULL)
	{
		perror("malloc");
		return;
	}
	//ʹ��
	/*s.arr2 = p;*/
	for (int i = 0; i < 10; i++)
	{
		p->arr2[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d   ", p->arr2[i]);
	}
	//�ͷ��ڴ�ռ�
	free(p);
	p = NULL;

	return 0;
}
