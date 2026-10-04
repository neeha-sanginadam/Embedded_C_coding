#include <stdio.h>

int main()
{
    int a[]={3,4,2,5,4,2,3,3,1};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        for(int j=i+1;j<sizeof(a)/sizeof(a[0]);j++)
        {
            if (a[i]==a[j])
            {
                printf("Duplicate element at index %d : %d\n",i, a[i]);
            }
        }
    }
}
/*
TC: O(n²)
SC: O(1)

*/