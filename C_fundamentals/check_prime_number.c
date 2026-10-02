#include <stdio.h>

int main()
{
    int n=36;
    int is_prime=1;
    if (n<2)
    {
        is_prime = 0;
    }
    for(int i=2;i<n/i;i++)
    {
        if(n%i == 0)
        {
            is_prime = 0;
        }
    }

    if(is_prime)
    {
        printf("Number %d is prime\n",n);
    }
    else{
        printf("number %d is not prime\n",n);
    }
}

/*
the factors of a numbers are going to repeat after square root of number:
ex: n=36, 1x13,2x18,3X12,4x9,6x6,9x4,12x3,18x2,36x1 --- the factors are repeating.
So if 36 has a divisor, at least one divisor must be ≤ √36.
if we get one number divisble for divisor then it is not prime.
*/