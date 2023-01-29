#include<stdio.h>
#include<assert.h>
#include<string.h>

char *my_strcat(char *str1, const char *str2)
{
    char *start = str1;
    assert(str1 && str2);
    str1 += strlen(str1);

    while( *str1++ = *str2++ )
        ;

    return start;
}

int main()
{
    char arr1[50] = "jahj";
    char arr2[] = "jacjs";

    my_strcat(arr1, arr2);

    printf("%s\n", arr1);
    return 0;
}