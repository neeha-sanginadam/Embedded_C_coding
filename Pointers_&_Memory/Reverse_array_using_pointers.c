#include <stdio.h>

//Reverse an array using pointers

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void traverse(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }

}

int main()
{
    int a[5]={1,2,3,4,5};
    int l=sizeof(a)/sizeof(a[0]);
    int i=0;
    printf("Before reverse:\n");
    traverse(a,l);
    while(i<l/2)
    {
        swap((a+i),(a+(l-i-1)));
        i+=1;
    }
    printf("\nAfter reverse:\n");
    traverse(a,l); printf("\n");

}