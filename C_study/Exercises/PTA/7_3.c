#include<stdio.h>

void print(int arr)
{
    if(arr)
    {
        while(arr % 10 == 0)
        {
            arr /= 10;
        }

        while(arr)
        {
            printf("%d", arr % 10);
            arr /= 10;
        }
    }
    else
    {
        printf("%d", 0);
    }
}

int main()
{
    int arr = 0;
    scanf("%d", &arr);
    print(arr);

    return 0;
}