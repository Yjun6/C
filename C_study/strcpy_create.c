#include<stdio.h>
#include<string.h>

char *my_strcpy(char *str1, char *str2)
{
    unsigned int len = strlen(str2);
    unsigned int i = 0;

    for(i = 0; i < len; i++)
    {
        str1[i] = str2[i];
    }
    
    return str1;
}

int main()
{
    char str1[50] = {0};
    char str2[] = "my name is Zhangyang";

    my_strcpy(str1, str2);

    printf("%s\n",str1);

    return 0;
}