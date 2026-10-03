#include <stdio.h>

int main()
{
    int n=4;
    int pos=1;
    if(n&(1<<pos))
    {
        printf("Bit at position %d is set.\n",pos);
    }
    else{
        printf("Bit at position %d is not set.\n",pos);
    }
    return 0;
}