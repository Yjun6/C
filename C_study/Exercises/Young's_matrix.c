#include<stdio.h>

int fond(int (*arr)[5], const int r, const int l, const int tmp)
{
    int x = 0;
    int y = 0;

    x = 0, y = l - 1;
    while( x < r && y >= 0 )
    {
        if(arr[x][y] < tmp)
            x++;
        else if(arr[x][y] > tmp)
            y--;
        else
            return 1;
    }

    return 0;
}

int main()
{  
    int arr[5][5] = {{ 1, 2, 3, 4, 5 },
                     { 2, 3, 4, 5, 6 },
                     { 3, 4, 6, 8, 9 },
                     { 5, 7, 8, 9, 10 }, 
                     { 12, 13, 14, 15, 16 } };
    int tmp = 0;
    printf("Enter the number you want to query:");
    scanf("%d",&tmp);
    int is_true = fond( arr, 5, 5, tmp);

    if(is_true == 1)
        printf("%d is exsit.\n", tmp);
    else
        printf("%d is not exsit.\n", tmp);

    return 0;
}
