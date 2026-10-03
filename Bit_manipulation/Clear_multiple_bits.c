//Set bits at position 2,4,6,8,11
#include <stdio.h>
#include <stdint.h>

void traverse_bits(uint16_t n)
{
    for(uint16_t i=0;i<16;i++)
    {
        printf("%u",(1)&(n>>i));
    }
    printf("\n");
}

int main()
{
    uint16_t a=4578;
    traverse_bits(a);
    uint16_t mask = ~((1<<2)|(1<<4)|(1<<6)|(1<<8)|(1<<11));
    traverse_bits(mask);
    a&=mask;
    traverse_bits(a);
    
    
}