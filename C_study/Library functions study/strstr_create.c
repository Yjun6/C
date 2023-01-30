#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
    assert(str1 && str2);

    const char *p1 = str1;
    const char *p2 = str2;
    const char *start1 = p1;
    const char *start2 = p2;

    if(*str2 == '\0')
        return (char*)str1;

    while( *p1 )
    {
        while(*p1 == *p2 && *p1 != '\0')
        {
            p1++;
            p2++;
        }
        if(*p2 == '\0')
            return (char*)start1;
        
        start1++;
        p1 = start1;
        p2 = start2;
    }

    return NULL;
}

int main()
{
    char *str1 = "abcdefgas";
    char *str2 = "defg";

    char *p = my_strstr(str1, str2);
    if(p != NULL)
    {
        printf("Got it!\n");
        printf("%s\n", p);
    }
    else
        printf("no\n");

    return 0;
}