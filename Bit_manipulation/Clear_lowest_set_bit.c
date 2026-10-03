#include <stdio.h>
#include <stdint.h>

void traverse_bits(uint16_t n)
{
    for(uint16_t i=0;i<16;i++)
    {
        printf("%u",(1)&(n>>i));
    }
}

int main()
{
    uint16_t n= 24;
    traverse_bits(n);
    if(n==0)
    {
        printf("No set bit found\n");
        return 0;
    }
    for (uint16_t i=0; i<16;i++)
    {
        if((1&(n>>i)))
        {

            n&=~(1<<i);
            printf("\nClearing lowest set bit:%u\n",i);
            break;
        }
    }
    traverse_bits(n);
    printf("\n");
    
}