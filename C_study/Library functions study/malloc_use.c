#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
    int *p = (int *)malloc(24);

    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    for(int i = 0; i < 6; i++)
    {
        *(p + i) = i + 1;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);
    p = NULL;

    return 0;
}