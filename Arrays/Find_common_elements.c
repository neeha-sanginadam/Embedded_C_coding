#include <stdio.h>

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11};
    int b[] = {2, 3, 5, 8, 9, 12};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }

    }
    printf("\n");
}

/*
Time: O(n × m)
*/