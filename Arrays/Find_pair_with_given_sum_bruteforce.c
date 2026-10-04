#include <stdio.h>

int main()
{
    int a[] = {2, 7, 11, 15, 3, 6, 9};
    int target=18;
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("Pair elementd: %d , %d\n", a[i], a[j]);
                return 0;
            }
        }
    }
}

/*
TC - O(n*n)
SC - O(1)
*/