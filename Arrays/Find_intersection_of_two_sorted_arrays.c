#include <stdio.h>

int main()
{
    int a[] = {1, 2, 2, 3, 5, 7, 9};
    int b[] = {2, 2, 3, 4, 7, 8, 9};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if (a[i]==b[j])
        {
            if((i==0 || a[i]!=a[i-1]) && (j==0 || b[j]!=b[j-1]))
            {
                printf("%d ", a[i]);
            }
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            j++;
        }

    }
    printf("\n");


}