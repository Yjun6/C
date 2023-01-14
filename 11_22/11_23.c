#include<stdio.h>

int main()
{
	int i = 1;
	//       
	int j = (++i) + (++i) + (++i);
	printf("j=%d\n", j);//12
	printf("i=%d\n", i);//4

	return 0;
}
