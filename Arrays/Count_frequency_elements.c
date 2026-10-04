#include <stdio.h>

int main()
{
    int a[]={1,2,2,3,4,4,5,6,6,6};
    
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        int count=0;
        for(int j=0;j<sizeof(a)/sizeof(a[0]);j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("Frequency count of element %d in array: %d\n",a[i],count);

    }

    int b[10]={0};
    for(int i=0;i<sizeof(a)/sizeof(a[0]); i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<10; i++)
    {
        if(b[i]>0)
        {
        printf("\nFrequency count of element %d in array: %d\n",i,b[i]);
        }
    }

}