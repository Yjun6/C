#include<stdio.h>
#include<string.h>

void string_rotation( char* const str, const unsigned int k)
{
    unsigned int len = strlen(str);
    unsigned int left = k;
    unsigned int right = len - 1;
    while(left < right)
    {
        char tmp = *(str + left);
        *(str + left) = *(str + right);
        *(str + right) = tmp;
        left++;
        right--;
    }
}

int cmp( char* str1, char* str2)
{
    unsigned int len1 = strlen(str1);
    unsigned int len2 = strlen(str2);
    //compare length
    if(len1 != len2)
        return 0;

    //string rotation
    unsigned int i = 0;
    for(i = 0; i < len1; i++)
    {
        string_rotation(str1, 1);
        string_rotation(str1, 0);
        if(strcmp( str1, str2) == 0)
            return 1;
    }
    return 0;

}

int main()
{
    char str_1[] = "abcde";
    char str_2[] = "cdeab";

    if(cmp(str_1, str_2) == 1)
        printf("These two strings are rotational relationships.\n");
    else
        printf("These two strings are not rotational relationships.\n");

    return 0;
}
