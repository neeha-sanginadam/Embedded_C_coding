// Print prime numbers in a range
#include <stdio.h>

int prime(int x)
{
    if (x<2) return 0;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int start=10, end=40;
    while(start<=end)
    {
        if(prime(start))
        {
            printf("%d ",start);
        }
        start++;
    }

}