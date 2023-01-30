#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[] = "123480991958@qq.com";
    char arr2[] = "@.";

    char *p;
    for(p = strtok(arr1, arr2); p != NULL; p = strtok(NULL, arr2))
    {
        printf("%s\n", p);
    }

    return 0;
}
