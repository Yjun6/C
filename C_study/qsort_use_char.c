#include<stdio.h>
#include<stdlib.h>//qsort()
#include<string.h>

int cmp_char(void* str1, void* str2)
{
    return *((char *)str1) - *((char *)str2);
}

int main()
{
    char arr[] = "hfgjsghajgs";

    qsort(arr, strlen(arr), sizeof(arr[0]), cmp_char);

    printf("%s\n", arr);

    return 0;
}