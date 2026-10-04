//Boyer–Moore Voting Algorithm. This is an important interview algorithm because it finds the majority element in O(n) time and O(1) extra space.

#include <stdio.h>

int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);

    int key=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            key=a[i];
            count++;
        }
        else if(key == a[i])
        {
            count++;
        }
        else{
            count--;
        }
    }

    int check=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            check++;
        }
    }
    if(check>n/2)
    {
        printf("majority element: %d is occured %d times\n",key, check );
    }
}