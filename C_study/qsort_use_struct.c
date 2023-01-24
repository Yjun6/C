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
    struct str s[5] = { { "zoukunle", 21, 78, 89}, 
                        { "zouyujie", 19, 84, 98}, 
                        { "wangmazi", 23, 68, 83}, 
                        { "lisi", 17, 78, 64}, 
                        { "heajf", 12, 12, 54}};
    qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_struct_name);
    int i = 0;
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