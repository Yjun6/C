#include<stdio.h>
#include<string.h>

void invert(char *str, unsigned int k)
{
    unsigned int i = 0, j = 0;
    unsigned int len = strlen(str);
    k %= len;
    
    for(i = 0; i < k; i++)
    {
        char s = str[0];
        for(j = 1; j < len; j++)
        {
            str[j - 1] = str[j];
        }
        str[len - 1] = s;
    }
}

int main()
{
    char arr[105] = {0};
    printf("Enter the string you need to invert:");
    //scanf("%[^\n]s", arr);
    gets(arr);
    printf("Enter the number of strings you need to invert:");
    unsigned int k = 0;
    scanf("%d", &k);

   invert(arr, k);

    printf("Your result is:");
    printf("%s\n", arr);

    return 0;
}