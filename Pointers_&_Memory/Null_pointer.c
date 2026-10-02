//NULL Pointer
//A NULL pointer is a pointer that intentionally points to no valid object or function.
#include <stdio.h>

int main()
{
    int *p=NULL;
    //p doesn't point to a valid int. Dereferencing a null pointer has undefined behavior and commonly results in a segmentation fault.
    if (p!=NULL)
    {
        printf("Value = %d\n", *p);
    }
    else{
        printf("Pointer is NULL\n");
    }
    printf("p doesn't point to a valid int. Dereferencing a null pointer has undefined behavior and commonly results in a segmentation fault.\n");
}