#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int pos=2;
    int l=sizeof(a)/sizeof(a[0]); //7
    int i=1;
    while(i<=pos)
    {
        int temp=a[0];
        for(int j=1;j<l;j++)
        {
            a[j-1]=a[j];
        }
        a[l-1]=temp;
        i++;
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int c[] = {1, 2, 3, 4, 5, 6, 7};
    int b[l];
    int j=0;
    for(int i=0;i<l;i++)
    {
       int p=(i+pos)%l;
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
*/