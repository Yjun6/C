#include<stdio.h>
#include<stdlib.h>//qsort()

int cmp_float(void* str1, void* str2)
{
    return *((float*)str1) - *((float*)str2);
}

int main()
{
    float arr[] = { 1.3545f, 13.43f, 1.23f, 3.24f, 3.2645f, 24.14653f};
    qsort( arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_float);

    int i = 0;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");

    return 0;
}