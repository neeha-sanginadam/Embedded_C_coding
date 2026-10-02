#include <stdio.h>
//Modify a variable using a pointer

int main()
{
    int a=10;
    int *p=&a;
    printf("Before modify: %d, Address: %p\n",a,(void *)p);

    *p=20;

    printf("After modify: %d, Address: %p\n",a,(void *)p);
}