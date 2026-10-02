/*
A year is a leap year if:

It is divisible by 400, OR
It is divisible by 4 but not divisible by 100.
*/

#include <stdio.h>

int main()
{
    int year = 2018;
    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}