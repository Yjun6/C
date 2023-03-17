#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

int my_atoi(const char* str)
{
	assert(str);

	size_t i = 0;
	while ((i < strlen(str)) && (str[i] == ' '))
	{
		i++;
	}

	if ((i == strlen(str)) || str[i] >'9' || str[i] < '0')
	{
		return 1;
	}

	int arr = 0;
	int num = 1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		arr = arr * 10 + (str[i] - 48);
		i++;
	}
	return arr;
}

int main()
{
	my_atoi("   210f2");
	return 0;
}