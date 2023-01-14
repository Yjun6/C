#include<stdio.h>

struct year
{
	int x;
	int y;
	int count;
	int year[1500];
}y;

int is_prime(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	scanf("%d %d", &y.x, &y.y);
	int i = 0;

	for (i = y.x;i <= y.y;i++)
	{
		int jade = 0;
		jade = is_prime(i);
		if (jade == 1)
		{
			y.year[y.count] = i;
			y.count++;
		}
	}

	printf("%d\n", y.count);
	for (i = 0;i < y.count;i++)
	{
		printf("%d ", y.year[i]);
	}

	return 0;
}