//A leader in an array is an element that is greater than every element to its right.
//The rightmost element is always a leader, because there is nothing to its right.
#include <stdio.h>
#include <limits.h>

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n=sizeof(a)/sizeof(a[0]);
    int maximum=INT_MIN;

    for(int i=n-1;i>=0;i--)
    {
        if(maximum<a[i])
        {
            printf("%d ",a[i]);
            maximum=a[i];
        }
    }
    printf("\n");
}

/*
Time:        O(n)
Extra space: O(1)
*/