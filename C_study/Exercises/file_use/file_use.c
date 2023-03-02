#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	FILE* p = fopen("D:\\Documents\\Desktop\\book\\JAVA\\1.txt", "r");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}

	// π”√
	// πÿ±’
	fclose(p);
	p = NULL;
	return 0;
}