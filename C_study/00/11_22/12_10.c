#include<stdio.h>
#include<stdbool.h>
#include<math.h>

struct sort
{
	int a;
	bool b;
};

bool Sort(int a)
{
	int i = 2;
	while (i <= sqrt(a))
	{
		if (a % i == 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		struct sort s;
		scanf("%d", &s.a);
		//1 2
		if (s.a == 2)
		{
			s.b = true;
		}
		else if (s.a == 1)
		{
			s.b = false;
		}
		else
		{
			s.b = Sort(s.a);
		}

		if (s.b == true)
		{
			printf("%d ", s.a);
		}

		i++;
	}


	return 0;
}