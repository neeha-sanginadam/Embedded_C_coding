//Pointer arithmetic means performing arithmetic operations on pointers to move through memory, especially arrays.
#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int l=sizeof(a)/sizeof(a[0]);
    //pointer to array elements
    int *p=&a[0];
    printf("Assiging pointer the address of 1st element:\n");
    for (int i=0;i<l;i++)
    {
        printf("Array value of element %d:%d\n",i+1,p[i]);
    }
    printf("*******************************************************\n");
    printf("Assiging pointer the address of 1st element (deferncing):\n");
    for (int i=0;i<l;i++)
    {
        printf("Array value of element %d:%d\n",i+1,*(p+i));
    }
    printf("*******************************************************\n");
    int *q=a;
    printf("Assiging pointer the address of array :\n");
    for (int i=0;i<l;i++)
    {
        printf("Array value of element %d:%d\n",i+1,q[i]);
    }
    printf("*******************************************************\n");
    printf("Assiging pointer the address of array (deferncing):\n");
    for (int i=0;i<l;i++)
    {
        printf("Array value of element %d:%d\n",i+1,*(q+i));
    }
    printf("*******************************************************\n");
    //Array of pointers
    int *z[5];

    printf("Assiging array of pointers with array elements:\n");
    for (int i=0;i<l;i++)
    {
        z[i]=&a[i];
    }
    for (int i=0;i<l;i++)
    {
        printf("Array value of element %d:%d\n",i+1,*z[i]);
    }
    printf("*******************************************************\n");
    printf("Using p++ pointer arthmetic:\n");
    int i=0;
    int *x=a;
    while(i<l)
    {
        printf("Array value of element %d:%d\n",i+1,*x);
        x++;
        i+=1;

    }
    printf("*******************************************************\n");
    printf("Using p-- pointer arthmetic:\n");
    i=l;
    x=&a[l-1];
    while(i>0)
    {
        printf("Array value of element %d:%d\n",i,*x);
        x--;
        i--;

    }
    printf("*******************************************************\n");
    printf("Using *(p-i) pointer arthmetic:\n");
    x=&a[l-1];
    printf("Array value of element %d:%d\n",l,*(x));

    for(int i=1;i<l;i++)
    {
        printf("Array value of element %d:%d\n",l-i,*(x-i));

    }
    



}