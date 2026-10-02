// Implement dynamic integer array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p=malloc(5*sizeof(int));
    if (p==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;

    }

    for(int i=0;i<5;i++)
    {
        *(p+i)=i*10;
    }
    for(int i=0;i<5;i++)
    {
        printf("Dynamic allocated inetger array(malloc): %d\n",*(p+i));
    }

    free(p);
    p=NULL;

    int *q=calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("Dynamic allocated inetger array(calloc): %d\n",*(q+i));
    }

    //realloc
    p=realloc(p,sizeof(int)*6);
    for(int i=0;i<6;i++)
    {
        printf("Dynamic allocated inetger array(realloc): %d\n",*(q+i));
    }
    
}