#include <stdio.h>

int main()
{
    int a[]={1,0,-1};
    int l= sizeof(a)/sizeof(a[0]);
    int i=0;
    while(i<l)
    {
        if (a[i]<0)
        {
            printf("Number %d is negative\n",a[i]);

        }
        else if (a[i]>0)
        {
            printf("Number %d is positive\n",a[i]);

        }
        else
        {
            printf("Number %d is zero\n",a[i]);

        }
        i+=1;

    }
    return 0;
}