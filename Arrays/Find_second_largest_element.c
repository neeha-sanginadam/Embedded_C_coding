#include <stdio.h>
#include <limits.h>

int main()
{
    int a[5]={34,76,82,74,64};
    int maximum=INT_MIN;
    int second_largest=INT_MIN;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(maximum<a[i])
        {
            second_largest = maximum;
            maximum =a[i];
        }
        else if(a[i]!=maximum && second_largest<a[i])
        {
            second_largest =a[i];
        }
    }
    printf("Maximum Element: %d | Secong Largest: %d\n", maximum, second_largest);
}