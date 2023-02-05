#include<assert.h>
#include<stdio.h>

int my_memcmp(const void *str1, const void *str2, size_t byte)
{
    assert(str1 && str2);

    size_t i = 0;

    for(i = 0; i < byte; i++)
    {
        if( *((char *)str1 + i) != *((char *)str2 + i) )
            return *((char *)str1 + i) - *((char *)str2 + i);
    }

    return 0;
}

int main()
{
    char arr1[] = "abcdefgw";
    char arr2[] = "abcdacaw";

    printf( "%d\n", my_memcmp( arr1, arr2, 5 * sizeof( arr1[0] ) ) );

    return 0;
}