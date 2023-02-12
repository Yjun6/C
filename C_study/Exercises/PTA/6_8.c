int Factorial( const int N )
{
    if(N < 0)
    {
        return 0;
    }
    if(N == 0)
    {
        return 1;
    }
    
    int sum = 1;
    int i = N;
    while(i)
    {
        sum *= i;
        i--;
    }
    return sum;
}