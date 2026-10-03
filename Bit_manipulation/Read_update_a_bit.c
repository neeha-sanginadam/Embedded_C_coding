#include <stdio.h>

void traverse_bits(int n)
{
    for(int i=0;i<16;i++)
    {
        //Reading the bits
        printf("%d",(1)&(n>>i));
    }
}
void update(int *n, int pos, int value)
{
    if (value)
    {
        *n|=(1<<pos);
    }
    else{
        *n&=~(1<<pos);
    }
}

int main()
{
    int pos=4;
    int n=3;
    printf("Value before:%d\n",n);
    traverse_bits(n);
    update(&n,pos,1);
    printf("\n");
    traverse_bits(n);
    printf("\n");
    printf("Value:%d\n",n);
}