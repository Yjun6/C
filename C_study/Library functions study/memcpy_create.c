#include<stdio.h>
#include<assert.h>

void *my_memcpy(void *str1, const void *str2, size_t byte)
{
    assert(str1 && str2);
    
    size_t i = 0;
    while( i < byte )
    {
        *((char *)str1 + i) = *((char *)str2 + i);
        i++;
    }

    return str1;
}

int main()
{
    char arr1[] = "abcdefg";
    char arr2[20] = {0};

    my_memcpy( arr2, arr1 + 2, 3 * sizeof(arr1[0]) );
    
    return 0;
}