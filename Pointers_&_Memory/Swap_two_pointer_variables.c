#include <stdio.h>
//Swap two pointer variables
void swap(int **x, int **y)
{
    int *temp =*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=10, b=20;
    int *p=&a;
    int *q=&b;
    printf("Before swap: %d, %d\n", *p, *q);
    swap(&p,&q);
    printf("After swap: %d, %d\n", *p, *q);

}

/*
Before:
p → a → 10
q → b → 20

After:
p → b → 20
q → a → 10
*/