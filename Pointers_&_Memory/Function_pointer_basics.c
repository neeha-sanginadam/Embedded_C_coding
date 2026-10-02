//A function pointer is a pointer that stores the address of a function.
#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{
    return x-y;
}

int multiply(int x, int y)
{
    return x*y;
}

int main()
{

    int a=10, b=20;
    int (*fn)(int,int);
    fn=add; //fn=&add
    printf("Add function:%d\n",fn(a,b));

    fn=subtract; //fn=&subtract
    printf("Subtract function:%d\n",fn(a,b));

    fn=multiply; //fn=&multiply
    printf("Multiply function:%d\n",fn(a,b));

    //fn to call each of the three functions.
    //Just like normal pointers, a function pointer can be initialized to NULL.
    /*
    int (*fn)(int, int) = NULL;
    fn(10, 20);    // ❌ Undefined behavior
    */

}