#include <stdio.h>

int main()
{
    int a[] = {0, 1, 0, 3, 12, 0, 5, 0, 7};
    int j=0;
    for (int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
    }
    for(int i=j;i<sizeof(a)/sizeof(a[0]);i++)
    {
        a[i]=0;
    }

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}