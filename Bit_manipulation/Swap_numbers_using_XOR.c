//Swap numbers using XOR
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
    uint16_t a=10;
    uint16_t b=20;
    uint16_t result=0;
    printf("Before swap:%u, %u\n", a, b);
    result=a^b;
    a=result^a;
    b=result^b;

    printf("After Swap:%u, %u\n", a, b);
    
}