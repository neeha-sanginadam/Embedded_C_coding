#include <stdio.h>

int gcd(int x, int y)
{
    while(y!=0)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}

int main()
{
    int a=48, b=18;
    int result=gcd(a,b);

    printf("GCD of %d and %d: %d\n", a, b, result);
}


/*
Divide \[a\] by \[b\] to find the quotient (\[q\]) and the remainder (\[r\]). This is written as:
a = q.b + r;
*/