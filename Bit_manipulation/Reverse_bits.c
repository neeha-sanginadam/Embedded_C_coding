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
    int16_t x=10;
    int16_t reverse=0;
    traverse_bits(x);
    printf("\n");

    for(int16_t i=0;i<16;i++)
    {
        int16_t bit = (x>>i)&1; //1
        reverse |=(bit<<(15-i));
    }
    traverse_bits(reverse);
    printf("\n");

    
}