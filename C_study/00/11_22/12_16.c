#include<stdio.h>
//
//int main()
//{
//	char a = 0;
//	while ((scanf("%c", &a)) != EOF)
//	{
//		getchar();
//		if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
//		{
//			printf("%c is an alphabet.\n", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", a);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = 0;
//    max = (a > b ? a : b);
//    max = (max > c ? max : c);
//    printf("%d", max);
//
//    return 0;
//}


#include<stdio.h>

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
	return 0;
}