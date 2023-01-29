#include<stdio.h>
#include<string.h>

int main()
{
    char arr[205] = {0};
    printf("Enter the string you need to invert:");
    //scanf("%[^\n]s", arr);
    gets(arr);
    printf("Enter the number of strings you need to invert:");
    unsigned int k = 0;
    scanf("%d", &k);

    unsigned int len = strlen(arr);
    strncat(arr, arr, len);
    k %= len;

    unsigned int i = 0;
    for(i = k; i < len + k; i++)
    {
        arr[i - k] = arr[i];
    }
    arr[len] = '\0';

    printf("Your result is:");
    printf("%s\n", arr);

    return 0;
}