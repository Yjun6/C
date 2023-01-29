#include<stdio.h>
#include<stdlib.h>//qsort()

int cmp_longlong(void* str1, void* str2)
{
    return *((long long*)str1) - *((long long*)str2);
}

int main()
{
    long long arr[] = {12, 54, 65, 64, 31, 132124, 5151245, 54145, 844652123, 561548420};

    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_longlong);

    int i = 0;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%lld ", arr[i]);
    }
    printf("\n");

    return 0;
}