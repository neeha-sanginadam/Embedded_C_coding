//Dangling Pointers: Pointers that refers to the memory that is no longer vaild to access.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p=malloc(sizeof(int));
    *p=10;

    printf("Before free: %d\n", *p);

    free(p);

    printf("After free: %d\n", *p);//Undefined behavior
}
/*int *get_pointer()
{
    int x = 10;
    return &x;       // ❌
}
After get_pointer() returns, x no longer exists, So the returned pointer points to an object whose lifetime has ended.

*/