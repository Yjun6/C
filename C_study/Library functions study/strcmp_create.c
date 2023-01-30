#include<assert.h>
#include<stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
    assert(str1 && str2);

    while(*str1 == *str2)
    {
        if(*str1 == '\0')
            return 0;

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main()
{
    char arr1[] = "hsj";
    char arr2[] = "hsg";

    printf("%d\n", my_strcmp(arr1, arr2));

    return 0;
}