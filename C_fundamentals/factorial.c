#include <stdio.h>

int factorial(int x)
{
    if (x==1)
    {
        return 1;
    }
    return x*factorial(x-1);
}

int main()
{
    int a=4;
    printf("Recursive Fcatorial:%d\n",factorial(a));
    int fact=1;
    while(a>0)
    {
        fact*=a;
        a-=1;
    }
    printf("factorial:%d\n",fact);
    return 0;
}