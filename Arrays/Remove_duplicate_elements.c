#include <stdio.h>

//Remove duplicates in sorted array

int main()
{
    int  a[]={1,1,2,2,2,3,4,4,5,6};
    int l=sizeof(a)/sizeof(a[0]);
    int j=1;
    for(int i=1;i<l;i++)
    {
        //compares with last unique element
        if(a[i-1]!=a[j-1])
        {
            a[j]=a[i];
            j+=1;
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("Array elements: %d\n",a[i]);
    }
}