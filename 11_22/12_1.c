#include<stdio.h>

//¶ş¼¶Ö¸Õë
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;

	printf("a = %d\n", a);
	printf("*pa = %d\n", *pa);
	printf("**ppa = %d\n", **ppa);
	//a = 10
	//*pa = 10
	//* *ppa = 10

	return 0;
}