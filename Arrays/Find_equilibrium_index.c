//Equilibrium Index : Sum of elements on the left side = Sum of elements on the right side.
#include <stdio.h>

int main()
{
    int a[] = {-7, 1, 5, 2, -4, 3, 0};
    int l=sizeof(a)/sizeof(a[0]);

    int total_sum=0;
    int left_sum=0;
    for(int i=0;i<l;i++)
    {
        total_sum+=a[i];
    }
    for(int i=0;i<l;i++)
    {
        total_sum -= a[i];
        if(total_sum == left_sum)
        {
            printf("Equilibrium index:%d\n",i);
            return 0;
        }
        left_sum+=a[i];
    }
    printf("No Equilibrium index");
}

//sum of ALL elements before index i= sum of ALL elements after index i