//Count number of digits
#include <stdio.h>

int main()
{
    int num=1234567890;
    int count=0;
    int original=num;
    if (num==0)
    {
        count=1;
    }
    while(num)
    {
        count+=1;
        num=num/10;
    }
    printf("Number of digits %d: %d\n",original,count);
}
/*
Time: O(log₁₀ n)
Space: O(1)
*/