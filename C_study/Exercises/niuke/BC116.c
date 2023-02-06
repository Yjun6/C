#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char arr[12] = {0};
    scanf("%s", &arr);
    unsigned int len = strlen(arr), i = 0;
    int sum = 0;

    for(i = 0; i < len; i++)
    {
        sum += (arr[i] - 48) % 2 * pow(10, len - i - 1);
    }

    printf("%d\n", sum);

    return 0;
}