#include<stdio.h>
#include<string.h>
#include<assert.h>

void my_sort(char* str1, char* str2)
{
    assert(str1 && str2);
    
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
    scanf("%[^\n]s", arr);
    int n = 0;
    scanf("%d", &n);
    
    int sz = strlen(arr);
    
    n %= sz;
    
    my_sort(arr, arr + n - 1);
    my_sort(arr + n, arr + sz - 1);
    my_sort(arr, arr + sz - 1);
    
    printf("%s", arr);
    return 0;
}