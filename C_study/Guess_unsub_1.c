#include<stdio.h>

int main()
{
    int a_true = 0, b_true = 0, c_true = 0, d_true = 0;
    int true = 0;

    for(a_true = 0; a_true < 2; a_true++)
    {
        for(b_true = 0; b_true < 2; b_true++)
        {
            for(c_true = 0; c_true < 2; c_true++)
            {
                for(d_true = 0; d_true < 2; d_true++)
                {
                    if(((a_true == 0) 
                    + (c_true == 1) 
                    + (d_true == 1)
                    + (d_true == 0) == 3 )
                    && (a_true + b_true + c_true + d_true == 1))
                    {
                        true = 1;
                        break;
                    }
                }
                if(true == 1)
                    break;
            }   
            if(true == 1)
                break;
        }
        if(true == 1)
            break;
    }

    if(a_true == 1)
        printf("unsub is a\n");
    if(b_true == 1)
        printf("unsub is b\n");
    if(c_true == 1)
        printf("unsub is c\n");
    if(d_true == 1)
        printf("unsub is d\n");

    return 0;
}