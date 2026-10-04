//Reverse an array
#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int l=sizeof(a)/sizeof(a[0])-1;
    int i=0;
    int temp;
    for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    while(i<l)
    {
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        i++;
        l--;
    }
    for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}