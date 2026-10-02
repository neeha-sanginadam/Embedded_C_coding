1. malloc(sizeof(int)*n);
    malloc() allocates a block of memory from the heap.
    This allocates enough memory for n integers.
    malloc() does not initialize the allocated memory. So the contents are indeterminate.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(5 * sizeof(int));

    if (p == NULL)
        return 1;

    for (int i = 0; i < 5; i++)
        p[i] = i + 1;

    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    p = NULL;

    return 0;
}

2. calloc(number_of_elements, size_of_each_element);
    int *p = calloc(5, sizeof(int));
    calloc() allocates memory for multiple elements and initializes all allocated bytes to zero.

    int *p = calloc(5, sizeof(int));

if (p == NULL)
    return 1;

for (int i = 0; i < 5; i++)
    printf("%d ", p[i]);

free(p);
p = NULL;

3. realloc() is used to resize previously allocated memory.
    int *p = malloc(5 * sizeof(int));
    p = realloc(p, 10 * sizeof(int));
    expand the existing block in place,
    allocate a new block, copy the old contents, and release the old block.

malloc() allocates a specified number of bytes without initializing the allocated memory, while calloc() allocates memory for a specified number of elements and initializes the allocated storage to zero.