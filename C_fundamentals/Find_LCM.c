//LCM(a, b) = (axb)/ GCD(a,b) -- Leat Common Multiple
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
    int a=12, b=18;
    int result =(a*b)/gcd(12,18);
    printf("LCM of two numbers %d and %d: %d\n", a, b, result);

}