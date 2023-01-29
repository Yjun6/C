#include<stdio.h>


//1.È¡Ä£·¨
int A1(int n)
{
	int count = 0;


	//1234 1234%10 1234/10
	//123  123%10  123/10 ...

	while (n)
	{
		//5 0101 3 0011 1 0001  0
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}

	return count;
}

//2.¸ß¼¶Ëã·¨
int A2(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		//8  7  00001000   00000111  0
		//5 4   01010 01000  01000 0
		count++;
	}

	return count;

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = A1(n);

	printf("1.  %d\n", count);

	count = A2(n);
	printf("2.  %d\n", count);

	return 0;
}
