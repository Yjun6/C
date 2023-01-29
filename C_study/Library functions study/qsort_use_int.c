#include<stdio.h>
#include<stdlib.h>//qsort()

int cmp_int(void* str1, void* str2)
{
    return *((int*)str1) - *((int*)str2);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 2, 1, 12, 34, 12, 34, 46, 3, 4, 7};

    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);

    int i = 0;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}