//

//#include <stdio.h>
//
//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int id = 0;
//    float score1 = 0.0;
//    float score2 = 0.0;
//    float score3 = 0.0;
//    scanf("%d;%f,%f,%f", &id, &score1, &score2, &score3);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, score1, score2, score3);
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    printf("score1=%d,score2=%d,score3=%d",
//        score1, score2, score3);
//
//    return 0;
//}

#include <stdio.h>

#define A 5

int main()
{
    char c = ' ';
    scanf("%c", &c);
    int i = 0;
    int j = 0;
    for (i = 1;i <= A;i++)
    {
        for (j = A - i;j > 0;j--)
        {
            printf(" ");
        }

        for (j = 0;j < i;j++)
        {
            printf("%c ", c);
        }
        printf("\n");

    }

    return 0;
}