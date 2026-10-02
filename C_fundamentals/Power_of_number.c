#include <stdio.h>

int main()
{
    int base =2;
    int exponent=5;
    int power=1;
    for(int i=0;i<exponent;i++)
    {
        power*=base;
    }
    printf("%d^%d = %d\n", base, exponent, power);
}