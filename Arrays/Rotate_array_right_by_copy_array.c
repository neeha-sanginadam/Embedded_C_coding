#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int pos=2;
    int l=sizeof(a)/sizeof(a[0]); //7
    
    int c[] = {1, 2, 3, 4, 5, 6, 7};
    int b[l];
    int j=0;
    for(int i=0;i<l;i++)
    {
       int p=(i-pos+l)%l;
        b[j]=c[p];
        j++;
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
}

/*
Your approach is:

Time: O(n × pos)
Space: O(1)

Right shift: 
p=(i-pos+l)%l
Its copying the array, take the element of position p from original array and place it in order in copy array.

Left shift:
p=(i+pos)%l
*/