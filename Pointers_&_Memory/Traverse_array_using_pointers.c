#include <stdio.h>
//Traverse an array using pointers

int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    for (int i=0;i<5;i++)
    {
        printf("Array Element-%d : %d or %d\n", i+1, p[i], *(p+i));
    }
    printf("***********************\n");

    int *q=a;
    for (int i=0;i<5;i++)
    {
        printf("Array Element-%d : %d or %d\n", i+1, q[i], *(q+i));
    }

    printf("***********************\n");
    int *z[5];
    for (int i=0;i<5;i++)
    {
        z[i]=&a[i];
        printf("Array Element-%d : %d\n", i+1, *z[i]);
    }


}