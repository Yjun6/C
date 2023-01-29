#include<stdio.h>
#include<stdlib.h>//qsort()
#include<string.h>

struct str
{
    char name[20];
    int age;
    float c_score;
    double java_score;
};

int cmp_int(const void* str1, const void* str2)
{
    return *((int*)str1) - *((int*)str2);
}

int cmp_char(const void* str1, const void* str2)
{
    return *((char *)str1) - *((char *)str2);
}

int cmp_longlong(const void* str1, const void* str2)
{
    return *((long long*)str1) - *((long long*)str2);
}

int cmp_float(const void* str1, const void* str2)
{
    return *((float*)str1) - *((float*)str2);
}

int cmp_struct_name(const void* str1, const void* str2)
{
    return strcmp( ((struct str *)str1) -> name, ((struct str *)str2) -> name );
}

int cmp_struct_age(const void* str1, const void* str2)
{
    return ((struct str *)str1) -> age - ((struct str *)str2) -> age;
}

int cmp_struct_c_score(const void* str1, const void* str2)
{
    return ((struct str *)str1) -> c_score - ((struct str *)str2) -> c_score;
}

int cmp_struct_java_score(const void* str1, const void* str2)
{
    return ((struct str *)str1) -> java_score - ((struct str *)str2) -> java_score;
}

int main()
{
    //   1  --  int
    int arr1[] = {1, 2, 3, 5, 2, 1, 12, 34, 12, 34, 46, 3, 4, 7};

    qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp_int);

    int i = 0;
    for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    //   2  --  char
    char arr2[] = "hfgjsghajgs";

    qsort(arr2, strlen(arr2), sizeof(arr2[0]), cmp_char);

    printf("%s\n", arr2);

    //   3  --  long long
    long long arr3[] = {12, 54, 65, 64, 31, 132124, 5151245, 54145, 844652123, 561548420};

    qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp_longlong);

    for(i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
    {
        printf("%lld ", arr3[i]);
    }
    printf("\n");

    //   4  --  float
    float arr4[] = { 1.3545f, 13.43f, 1.23f, 3.24f, 3.2645f, 24.14653f};
    qsort( arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp_float);

    for(i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++)
    {
        printf("%f ", arr4[i]);
    }
    printf("\n");

    //  5  --  struct
    struct str s[5] = { { "zoukunle", 21, 78, 89}, 
                        { "zouyujie", 19, 84, 98}, 
                        { "wangmazi", 23, 68, 83}, 
                        { "lisi", 17, 78, 64}, 
                        { "heajf", 12, 12, 54}};
    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_name);
    printf("\nThis is cmp_struct_name sort.\n");
    for( i = 0; i < 5; i++)
    {
        printf("name = %s age = %d c_score = %f java_score = %lf\n", 
        s[i].name, s[i].age, s[i].c_score, s[i].java_score);
    }

    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_age);
    printf("\nThis is cmp_struct_age sort.\n");
    for( i = 0; i < 5; i++)
    {
        printf("name = %s age = %d c_score = %f java_score = %lf\n", 
        s[i].name, s[i].age, s[i].c_score, s[i].java_score);
    }

    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_c_score);
    printf("\nThis is cmp_struct_c_score sort.\n");
    for( i = 0; i < 5; i++)
    {
        printf("name = %s age = %d c_score = %f java_score = %lf\n", 
        s[i].name, s[i].age, s[i].c_score, s[i].java_score);
    }

    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_java_score);
    printf("\nThis is cmp_struct_java_score sort.\n");
    for( i = 0; i < 5; i++)
    {
        printf("name = %s age = %d c_score = %f java_score = %lf\n", 
        s[i].name, s[i].age, s[i].c_score, s[i].java_score);
    }

    return 0;
}