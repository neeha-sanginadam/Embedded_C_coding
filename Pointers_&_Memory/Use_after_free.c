//Use-after-free occurs when you access memory which has been released using free().
//Use-after-free is closely related to the dangling pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));

    if (p == NULL)
        return 1;

    *p = 10;

    printf("Before free: %d\n", *p);

    free(p);

    printf("After free: %d\n", *p);   // ❌ Use-after-free

    return 0;
}

/*
How to resolve that:
After releasing the memory using free(), initilize that to NULL;
free(p);
p = NULL;
Dangling pointer:

A pointer that refers to memory/object whose lifetime has ended.

Use-after-free:

Actually using/accessing that pointer after the memory was freed.

Problem	Example	What happens
NULL pointer	int *p = NULL	Intentionally points nowhere
Wild pointer	int *p;	Uninitialized pointer
Dangling pointer	free(p)	Pointer refers to released memory
Use-after-free	free(p); *p = 10	Accessing released memory
Memory leak	Lose pointer without free()	Allocated memory cannot be reclaimed
*/