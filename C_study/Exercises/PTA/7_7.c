#include<stdio.h>

int main()
{
    int h = 0;
    int min = 0;
    scanf("%d:%d", &h, &min);

    if(h < 12)
    {
        printf("%d:%d AM", h, min);
    }
    else if(h == 12)
    {
        printf("%d:%d PM", h, min);
    }
    else
    {
        printf("%d:%d PM", h - 12, min);
    }

    return 0;
}