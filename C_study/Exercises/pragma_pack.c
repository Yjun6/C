#include<stdio.h>

//#pragma pack(2)

struct stu
{
    char name[20];
    float dog;
    int age;
    double score;
};

#pragma pack()

int main()
{
    printf("%d\n", sizeof(struct stu));
    return 0;
}