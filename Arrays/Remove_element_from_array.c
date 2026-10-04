#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6};
    int k=4;
    int j=0;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]==k)
        {
            continue;
        }
        a[j]=a[i];
        j++;
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }
}

/*
TC: O(n)
SC: O(1)
*/