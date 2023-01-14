#include<stdio.h>

struct stu
{
	char name[10];
	int score1;
	int score2;
	int score3;
};

int add(int x, int y, int c)
{
	return (x + y + c);
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	struct stu a;
	scanf("%s %d %d %d", &a.name, &a.score1, &a.score2, &a.score3);
	int sum1 = add(a.score1, a.score2, a.score3);

	int i = 0;
	for (i = 1;i < n;i++)
	{
		struct stu b;
		scanf("%s %d %d %d", &b.name, &b.score1, &b.score2, &b.score3);
		int sum2 = add(b.score1, b.score2, b.score3);
		if (sum2 > sum1)
		{
			a = b;
			sum1 = sum2;
		}
	}

	printf("%s %d %d %d", a.name, a.score1, a.score2, a.score3);

	return 0;
}