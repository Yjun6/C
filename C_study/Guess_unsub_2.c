#include<stdio.h>
int main()
{
    char unsub = 0;
    
    for( unsub = 'a'; unsub <= 'd'; unsub++)
    {
        if((unsub != 'a') + (unsub == 'c') +
           (unsub == 'd') + (unsub != 'd') == 3)
           break;
    }
    printf("unsub is %c",unsub);

    return 0;
}