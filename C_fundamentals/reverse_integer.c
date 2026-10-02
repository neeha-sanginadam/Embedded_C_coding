#include <stdio.h>

int main()
{
    int x=1234;
    int r=0;
    while(x)
    {
        r=10*(r)+x%10;
        x=x/10;
    }
    printf("Reverse integer: %d\n",r);
    return 0;
}