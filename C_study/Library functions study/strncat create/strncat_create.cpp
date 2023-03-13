#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncat(char* des, const char* sou, size_t num)
{
	assert(des && sou);

	char* start = des;
	des += strlen(des);
	int i = 0;
	for ( ; i < num && i < strlen(sou); i++)
	{
		*(des + i) = *(sou + i);
	}

	while (i < num)
	{
		*(des + i) = '\n';
		i++;
	}

	return start;
}

int main()
{
	char arr1[50] = "zouyujie ";
	char arr2[] = "is good girl!";
	my_strncat(arr1, arr2, sizeof(char) * strlen(arr2) + 5);
	return 0;
}
