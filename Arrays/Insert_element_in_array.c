#include <stdio.h>

int main()
{
    int a[6]={1,2,4,5,6};
    int pos=6;
    int value=10;
    int capacity =6;
    int l=5;//Current number of elements;
    //Insert at beginning

    if(pos>capacity)
    {
        printf("Array is full\n");
        return 0;
    }
    if(pos==1)
    {
        for(int i=l;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=value;
    }
    else if(pos==l+1)
    {
        //Insert at the end
        a[l]=value;

    }
    else if(pos>=1 && pos<=l){
        for(int i=l;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=value;
    }
    else{
        printf("Invalid position\n");
        return 0;
    }
    l+=1;
    //printf(Array)
    for(int i=0;i<l;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/*
For insertion:

Beginning: O(n)
Middle: O(n)
End: O(1)
Space: O(1)
*/