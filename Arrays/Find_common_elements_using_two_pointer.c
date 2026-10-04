#include <stdio.h>

//as the arrays are sorted we can use two poineter approach.
int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    int b[] = {2, 3, 5, 8, 9, 12};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else{
            i++;
        }
    }

    printf("\n");
}

/*
Time: O(n + m)
*/