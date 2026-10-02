#include<stdio.h>

int main()
{
    int first=0, second=1;
    int n=10, next, i=0;
    while(i<n)
    {
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
        i++;
    }
    return 0;

}