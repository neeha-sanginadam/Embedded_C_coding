#include <stdio.h>
#include <limits.h>

int main()
{
    int a[5]={34,76,82,74,64};
    int minimum=INT_MAX;
    int second_smallest = INT_MAX;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(minimum>a[i])
        {
            second_smallest=minimum;
            minimum =a[i];
        }
        else if(a[i]!=minimum && second_smallest>a[i])
        {
            second_smallest = a[i];
        }
    }
    printf("Minimum Element: %d | Second Smallest: %d\n", minimum, second_smallest);
}