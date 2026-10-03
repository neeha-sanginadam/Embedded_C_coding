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
    uint16_t a=141;
    uint16_t l= 4;
    uint16_t pos=4;
    traverse_bits(a);

    //mask
    int mask=0;
    mask = ((1<<l)-1)<<pos;
    traverse_bits(mask);
    uint16_t extract;

    extract=(a&mask)>>pos;
    traverse_bits(extract);

    
}

/*
If the purpose of "extract a bit field" is to get the field as a normal value starting from bit 0, you need to shift the result back:
*/