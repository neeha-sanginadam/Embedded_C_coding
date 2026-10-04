#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,6};
    int l=sizeof(a)/sizeof(a[0]);
    int res= (a[l-1]*(a[l-1]+1)/2);

    for (int i=0;i<l;i++)
    {
        res-=a[i];
    }
    printf("Missing element: %d\n",res);

    //Other method
    int result=0;
    int start=a[0];
    int end=a[l-1];
    for(int i=start;i<=end;i++)
    {
        result^=i;
    }
    for(int i=0;i<l;i++)
    {
        result^=a[i];
    }
    printf("Missing element: %d\n",result);

}

/*
TC: O(n)
SC: O(1)

Method	TC	SC	Issue
Sum	O(n)	O(1)	Possible integer overflow
XOR	O(n)	O(1)	No overflow problem
*/