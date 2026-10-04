#include <stdio.h>

int main()
{
    int a[8] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n=4;
    int m=4; 
    int i=n-1; 
    int j=m-1; 
    int k=n+m-1; 

    while(k>=0)
    {
        if(j>=0 && i>=0 )
        {   if(b[j]>a[i])
            {
                a[k]=b[j];
                j--;
            }
            else 
            {
                a[k]=a[i];
                i--;
            }
            
        }
        else if(j>=0)
        {
            a[k]=b[j];
            j--;
        }
        k--;
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

/*
Complexity: O(n + m) time and O(1) extra space. ✅
*/