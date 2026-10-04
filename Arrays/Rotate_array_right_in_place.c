#include <stdio.h>

void reverse(int *arr, int start, int end)
{
    int i=start;
    int j=end;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int pos=2;
    int l=sizeof(a)/sizeof(a[0]);
    reverse(a,l-pos,l-1);
    printf("\n");
    reverse(a,0,l-pos-1);
    reverse(a,0,l-1);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}