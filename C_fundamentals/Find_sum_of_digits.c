//Find sum of digits
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int original=12345678;
    int sum=0;
    int num=abs(original);
    while(num)
    {
        sum+=num%10;
        num=num/10;
    }
    printf("Sum of digits in %d: %d\n", original,sum);
}
/*
Time: O(number of digits)
Space: O(1)
*/