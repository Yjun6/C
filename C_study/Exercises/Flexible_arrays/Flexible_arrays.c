#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct s1
{
	int arr;
	char arr2[];//柔性数组
};

int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("++++++++++\n");

	//申请内存空间
	struct s1* p = (struct s1*)malloc(sizeof(int) + 10 * sizeof(char));
	if (p == NULL)
	{
		perror("malloc");
		return;
	}
	//使用
	/*s.arr2 = p;*/
	for (int i = 0; i < 10; i++)
	{
		p->arr2[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d   ", p->arr2[i]);
	}
	//释放内存空间
	free(p);
	p = NULL;

	return 0;
}
