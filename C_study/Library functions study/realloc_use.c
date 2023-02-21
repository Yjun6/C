#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = (int *)malloc(40);

    if ( p == NULL )
    {
        perror ("malloc");
        return 1;
    }

    int *ptr = (int *)realloc(p, 20);

    if(ptr != NULL)
    {
        p = ptr;
    }

    free(p);
    p = NULL;

    return 0;
}