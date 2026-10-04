#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 5, 7, 9};
    int b[] = {2, 2, 4, 6, 7, 8};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            if(i==0 || a[i]!=a[i-1])
            {
                printf("%d ",a[i]);
            }
            i++;
        }
        else if(a[i]>b[j])
        {
            if(j==0 || b[j]!=b[j-1])
            {
                printf("%d ", b[j]);
            }
            j++;
        }
        else{
            if((i==0 || a[i]!=a[i-1] ) && (j==0 || b[i]!=b[j-1]))
            {
                printf("%d ", a[i]);
            }

            i++;
            j++;
        }
    }
    while(j<m)
    {
        if(j==0 || b[j]!=b[j-1])
        {
            printf("%d ",b[j]);
        }
        j++;
    }

    while(i<n)
    {
        if(i==0 || a[i]!=a[i-1])
        {
            printf("%d ",a[i]);
        }
        i++;
    }
    printf("\n");

}

/*
TC -O(n+m)
SC - O(1)
*/