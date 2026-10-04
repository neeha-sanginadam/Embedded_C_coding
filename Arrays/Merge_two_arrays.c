#include <stdio.h>

int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c[n+m];

    for(int i=0;i<n;i++)
    {
        c[i]=a[i];

    }
    for(int i=0;i<m;i++)
    {
        c[i+n]=b[i];

    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
}

/*
We cannot write to array a. That's out-of-bounds memory access → undefined behavior.
*/