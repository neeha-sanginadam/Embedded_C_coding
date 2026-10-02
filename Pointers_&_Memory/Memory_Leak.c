//A memory leak occurs when dynamically allocated memory is no longer needed, but the program loses the ability to free it.
//In C, this usually happens with malloc(), calloc(), or realloc() when you forget to call free().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));

    if (p != NULL)
    {
        *p = 10;
        printf("%d\n", *p);
    }

    return 0;
}
//Here before program finishes, we never do free(p). The allocated memory is not explicitly released. That's a memory leak.

/*
Correct version.
int *p = malloc(5 * sizeof(int));

if (p != NULL)
{
    // use memory

    free(p);
    p = NULL;
}
*/