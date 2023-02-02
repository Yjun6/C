#include<stdio.h>

int main()
{
    FILE* p = fopen("c.c", "r");
    if(p == NULL)
    {
        perror("fopen");
        return 1;
    }

    fclose(p);
    p = NULL;

    return 0;
}