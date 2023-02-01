#include<stdio.h>
int triangle(unsigned int i, size_t j)
{
    if(i == j || j == 0)
        return 1;
    else
        return triangle(i - 1, j - 1) + triangle(i - 1, j);
}

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    unsigned int i = 0, j = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%5d", triangle(i, j));
        }
        printf("\n");
    }

    return 0;
}