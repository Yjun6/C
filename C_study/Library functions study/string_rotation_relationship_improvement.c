#include<stdio.h>
#include<string.h>

int cmp( char* str1, char* str2)
{

    unsigned int len1 = strlen(str1);
    unsigned int len2 = strlen(str2);
    //compare length
    if(len1 != len2)
        return 0;

    //string rotation
    //copy str1
    //strcat(str1, str1);
    strncat(str1, str1, len1);
    
    //compare string
    //strstr() return NULL / str1.str2.address
    if( strstr(str1, str2) != NULL )
        return 1;
    else
        return 0;
}

int main()
{
    char str_1[50] = "abcde";
    char str_2[] = "cdeab";

    if( cmp(str_1, str_2) )
        printf("These two strings are rotational relationships.\n");
    else
        printf("These two strings are not rotational relationships.\n");

    return 0;
}