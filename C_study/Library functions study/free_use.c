#include<stdio.h>
#include<stdlib.h>

int main()
{
    //1.
    int *p = (int *)malloc(40);
    free(p);
    p = NULL;
    //2.
    p = (int *)calloc(3, 4);
    free(p);
    p = NULL;
    //3.
    p = (int *)realloc(p, 40);
    free(p);
    p = NULL;
    
    return 0;
}