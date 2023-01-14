#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s", s);
    for (int i = 0;i < strlen(s);i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            printf("%c", s[i] - 'a' + 'A');
        else
            printf("%c", s[i]);
    }
    return 0;
}

//#include<stdio.h>
//#include<string.h>

//int main()
//{
//	char arr1[100] = { 0 };
//	scanf("%s", arr1);
//	int len = strlen(arr1);
//
//	int i = 0;
//
//	for (i = 0;i < len;i++)
//	{
//		if (arr1[i] >= 'a' && arr1[i] = < 'z')
//		{
//			arr1[i] -= 32;
//		}
//	}
//
//	printf("%s", arr1);
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//x x+k   x+6k
//	int x = 0, k = 0;
//	int sum = 0;
//
//	int i = 0;
//	for (i = 1;i <= 6;i++)
//	{
//		i += i;
//	}
//
//	//x*7*52+(k+..+6k)*52>=n
//
//	while (x * 7 * 52 + (i*k) * 52 >= n)
//	{
//		x++;
//		if (x * 7 * 52 + (i * k) * 52 < n)
//		{
//			k++;
//		}
//	}
//
//
//	printf("%d\n%d", x, k);
//
//
//	return 0;
//}
