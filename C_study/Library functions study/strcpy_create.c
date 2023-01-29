#include<stdio.h>
#include<string.h>
#include<assert.h>

char *my_strcpy(char *str1, const char *str2)
{
    char *start = str1;
    assert( str1 && str2 );
    
    while( *str1++ = *str2++ )
        ;
    
    return start;
}

int main()
{
    char str1[50] = {0};
    char str2[] = "my name is\0 Zhangyang";

    my_strcpy(str1, str2);

    printf("%s\n",str1);

    return 0;
}