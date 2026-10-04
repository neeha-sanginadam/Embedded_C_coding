#include <stdio.h>
// Move negative numbers to one side while preserving the order
//Whenever we find a negative number, move it to the next negative position and shift the elements in between one position to the right.

int main()
{
    int a[] = {2, -4, 6, -1, 8, -3, 5, -7, 9};
    int j=0;
    for(int i=0; i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]<0)
        {
            int temp =a[i];
            for(int k=i;k>j;k--)
            {
                a[k]=a[k-1];
            }
            a[j]=temp;
            j++;
        }
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


}

/*
Complexity
Time: O(n²) worst case
Space: O(1)
Stable: ✅ Yes

The important concept here is stable partition: partitioning the array while preserving the original relative order.
*/
