#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strncpy(char* des, const char* sou, size_t num)
{
	assert(des && sou);

	char* start = des;
	size_t i = 0;
	for (; i < num && i < strlen(sou); i++)
	{
		des[i] = sou[i];
	}

	while (i < num)
	{
		des[i] = '\0';
		i++;
	}

	return start;
}

int main()
{
	char des[20];
	char sou[] = "I Love You!";
	my_strncpy(des, sou, sizeof(char) * 18);
	return 0;
}
