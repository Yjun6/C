#include<stdio.h>
#include<string.h>

void left_handed(char* const str, unsigned int tmp)
{
    unsigned int i = 0;
    unsigned int j = 0;
    char The_median_value = 0;
    unsigned int len = strlen( str );
    tmp %= len;
    
    while(i < tmp)
    {
        The_median_value = *str;
        for(j = 0; j < len - 1; j++)
        {
            *(str + j) = *(str + j + 1);
        }

        *(str + len - 1) = The_median_value;
        i++;
    }
}

int main()
{
    char str[] = "I am a big beauty.";

    unsigned int k = 0;
    printf("Please enter the number of characters you need to be left-handed:");
    scanf("%u", &k);

    left_handed( str, k);

    printf("%s\n", str);

    return 0;
}