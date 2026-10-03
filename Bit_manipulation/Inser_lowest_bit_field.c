#include <stdio.h>
#include <stdint.h>

//nsert a bit field means taking some bits from one number and placing them into a specific position in another number.
//Take the lowest l bits from b and insert them into a at pos.then you need to first extract the lowest 4 bits of b, then shift them to position 10.

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
    uint16_t a=141;
    uint16_t b=7658;
    uint16_t l= 4;
    uint16_t pos=10;
    traverse_bits(a);
    traverse_bits(b);

    //mask
    int mask=0;
    mask = (((1<<l)-1)&b)<<pos;
    traverse_bits(mask);
    a=a|mask;
    printf("AFter insertion at position %u length of %u:\n",pos, l);
    traverse_bits(a);

    

    
}

/*
If the purpose of "extract a bit field" is to get the field as a normal value starting from bit 0, you need to shift the result back:
--Taking l length bits from b at lowest, insering then at positon pos in a upto the length of l.

*/