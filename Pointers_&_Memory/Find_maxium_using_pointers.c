#include <stdio.h>
//Find maximum using pointers” means finding the maximum element in an array using a pointer.

int main()
{
    int a[5]={2,10,2,30,5};
    int *p=&a[0];

    for(int i=1;i<5;i++)
    {
        if (*p < *(a+i))
        {
            p=(a+i);
        }
        /*
        if (*p < &a[i])
        {
            p=&a[i]; //Is not good parctice
        }
        */
    }
    printf("Maximum Element: %d\n", *p);

}