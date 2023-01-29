//#include<stdio.h>
//
//int main()
//{
//	int year = 0, moth = 0, day = 0;
//	scanf("%4d %2d %2d", &year, &moth, &day);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", moth);
//	printf("date=%02d", day);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    while ((scanf("%c", &a)) != EOF)
//    {
//        getchar();
//        char b = 0;
//        if (a <= 'z')
//        {
//            b = a + 32;
//        }
//        else
//        {
//            b = a - 32;
//        }
//        printf("%c\n", b);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    double a = 0, b = 0, c = 0;
//    scanf("%lf %lf", &a, &b);
//    b /= 100;
//    b *= b;
//    printf("%.2lf", 1.0 * a / b);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a, b, c, d, e;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    printf("%.1lf", (a + b + c + d + e) * 1.0 / 5);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("Happy New Year*2019*");
//    return 0;
//}

#include <stdio.h>

int main()
{
    char a = 0;
    scanf("%c", &a);
    if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

//#include <stdio.h>
//
//int main() {
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c",
//        73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 1234;
//    printf("0%o 0X%X", a, a);
//    return 0;
//}