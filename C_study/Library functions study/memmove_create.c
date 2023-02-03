#include<stdio.h>
#include<assert.h>

void *my_memmove(void *str1, const void *str2, size_t byte)
{
    assert(str1 && str2);
    
    size_t i = 0;
    if(str1 < str2)
    {
        while( i < byte )
        {
            *((char *)str1 + i) = *((char *)str2 + i);
            i++;
        }
    }
    else
    {
        while( i < byte )
        {
            *((char *)str1 + byte - i - 1) = *((char *)str2 + byte - i - 1);
            i++;
        }
    }

    return str1;
}

int main()
{
    char arr1[] = "abcdefg";

    my_memmove( arr1 + 4, arr1, 3 * sizeof(arr1[0]) );
    
    return 0;
}