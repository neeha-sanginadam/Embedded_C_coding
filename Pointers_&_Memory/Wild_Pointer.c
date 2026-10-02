//A wild pointer is a pointer that has not been initialized with a valid address.
//A wild pointer contains an unknown/indeterminate address.
#include <stdio.h>

int main()
{
    int *p;       // Wild pointer

    printf("%d\n", *p);   // ❌ Undefined behavior

    return 0;
}
//how to avoid wild pointer? by initizing to NULL.