#include <stdio.h>
#include <limits.h>

int main()
{
    int a[5]={34,76,82,74,64};
    int maximum=INT_MIN;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(maximum<a[i])
        {
            maximum =a[i];
        }
    }
    printf("Maximum Element: %d\n", maximum);
}