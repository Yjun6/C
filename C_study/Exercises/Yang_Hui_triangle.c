// 在屏幕上打印杨辉三角。
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<stdio.h>

int Yang_Hui(unsigned int i, unsigned int j)
{
    if(j == 0 || i == 1 || i == j)
    {
        return 1;
    }
    else
    {
        return Yang_Hui(i - 1, j - 1) + Yang_Hui(i - 1, j);
    }
}

int main()
{
    unsigned int row = 0;
    printf("请输入您需要的杨辉三角的行数：");
    scanf("%u", &row);
    unsigned int i = 0, j = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", Yang_Hui(i, j));
        }
        printf("\n");
    }
    return 0;
}