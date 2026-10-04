#include <stdio.h>

int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum=a[0];
    int maximum=a[0];
    int l=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<l;i++)
    {    
        if(sum+a[i]>a[i])
        {
            sum+=a[i];
        }    
        else{
            sum=a[i]; //starting new subarray tracking 
        }
        if(maximum<sum)
        {
            maximum=sum;
        }
    }
    printf("Maximum sum: %d\n",maximum);
}

//Important: what if the array is having only nehgative elements? then you cannot assign a[i]=0 right...
//see the above solution.
/*
Time: O(n)
Extra space: O(1)
*/