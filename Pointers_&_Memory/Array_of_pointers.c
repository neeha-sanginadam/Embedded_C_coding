#include <stdio.h>

//Array of pointers
int main()
{
    int a[5]={1,2,3,4,5};
    int *p[5];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        p[i]=&a[i];
    }
    printf("Upadted the values of arrays of pointers, now printing them:\n");
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("Array of element %d: %d\n",i+1,*p[i]);
    }

    //modifying the original array through the array of pointers
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        *p[i]*=10;
    }

    printf("modifying the original array through the array of pointers, now printing them:\n");
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("Array of element %d: %d\n",i+1,*p[i]);
    }

    
}