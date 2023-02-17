#include<stdio.h>

double new_h(int h)
{
    double money = 0;
    money = h * 30;
    if(h > 40)
    {
        money -= (h - 40) * 30;
        money += (h - 40) * 30 * 1.5;
    }

    return money;
}

double old_h(int h)
{
    double money = 0;
    money = h * 50;
    if(h > 40)
    {
        money -= (h - 40) * 50;
        money += (h - 40) * 50 *1.5;
    }

    return money;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    int h = 0;
    scanf("%d", &h);

    double money = 0;
    if(year < 5)
    {
        money = new_h(h);
    }
    else
    {
        money = old_h(h);
    }

    printf("%.2lf", money);

    return 0;
}