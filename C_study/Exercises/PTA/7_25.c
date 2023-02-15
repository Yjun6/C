#include<stdio.h>

void print(long long i)
{
    if( i )
    {
        print(i / 10);
                
        if(i / 10)
        {
            printf(" ");
        }
        
        switch(i % 10)
        {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
        }
        
    }
}

int main()
{
    long long i = 0;
    scanf("%lld", &i);
    if(i < 0)
    {
            printf("fu ");
            i *= -1;
    }

    if(i)
    {
    print( i );
    }
    else
    {
        printf("ling");
    }
    
    return 0;
}