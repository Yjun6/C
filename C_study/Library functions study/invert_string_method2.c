#include<stdio.h>
#include<string.h>

void inversion(char *str1, char *str2)
{
    while(str1 < str2)
    {
        char tmp = *str1;
        *str1 = *str2;
        *str2 = tmp;
        str1++;
        str2--;
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

    unsigned int len = strlen(arr);
    k %= len;

    inversion(arr, arr + k - 1);
    inversion(arr + k, arr + len - 1);
    inversion(arr, arr + len - 1);

    printf("Your result is:");
    printf("%s\n", arr);

    return 0;
}