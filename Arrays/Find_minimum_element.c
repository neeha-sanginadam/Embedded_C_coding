#include <stdio.h>
#include <limits.h>

int main()
{
    int a[5]={34,76,82,74,64};
    int minimum=INT_MAX;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(minimum>a[i])
        {
            minimum =a[i];
        }
    }
    printf("Minimum Element: %d\n", minimum);
}