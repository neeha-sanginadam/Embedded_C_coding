#include <stdio.h>

void traverse_bits(int n)
{
    for(int i=0;i<16;i++)
    {
        printf("%d",(1)&(n>>i));
    }
}

int main()
{
    int pos=5;
    int n=3;
    printf("Value before:%d\n",n);
    traverse_bits(n);
    n^=(1<<pos);
    printf("\n");
    traverse_bits(n);
    printf("\n");
    printf("Value:%d\n",n);
}