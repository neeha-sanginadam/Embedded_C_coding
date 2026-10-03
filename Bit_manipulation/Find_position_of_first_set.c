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
    }
    for (uint16_t i=0; i<16;i++)
    {
        if((1&(n>>i)))
        {
            
            printf("\nFirst position set bit:%u\n",i);
            break;
        }
    }
    
}