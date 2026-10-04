#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ", a[i]);
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        b[i]=a[i];
    }
    printf("Copied elements:\n");
    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++)
    {
        printf("%d ", b[i]);
    }
}