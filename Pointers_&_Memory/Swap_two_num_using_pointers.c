#include <stdio.h>
//Swap two number using pointers
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=10, b=20;
    printf("Before swap: %d, %d\n", a, b);
    swap(&a,&b);
    printf("After Swap: %d, %d\n",a,b);

}
/*
Before:
a → 10
b → 20

After:
b → 10
a → 20

*/