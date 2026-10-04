#include <stdio.h>
// Move negative numbers to one side

int main()
{
    int a[] = {2, -4, 6, -1, 8, -3, 5, -7, 9};
    int j=0;
    for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]<0)
        {
            int temp =a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


}