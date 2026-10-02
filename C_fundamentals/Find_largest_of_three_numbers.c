#include <stdio.h>

int main()
{
    int a=10, b=20, c=30;
    int maximum;
    if (a>b && a>c)
    {
        maximum = a;
    }
    else if(b>c && b>a)
    {
        maximum = b;
    }
    else{
        maximum = c;
    }
    printf("Largest of three numbers: %d\n",maximum);
    
}