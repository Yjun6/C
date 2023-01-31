#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
    FILE* p = fopen("yuan.c", "r");
    if(p == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    fclose(p);
    p = NULL;

    return 0;
}