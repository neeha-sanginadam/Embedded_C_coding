#include <stdio.h>
#include <stdint.h>

void traverse_bits(uint16_t n)
{
    for(uint16_t i=0;i<16;i++)
    {
        //Reading the bits
        printf("%u",(1)&(n>>i));
    }
}

int main()
{
    uint16_t count=0;
    uint16_t n=121;
    traverse_bits(n);
    for(uint16_t i=0;i<16;i++)
    {
        if((1&(n>>i))==0)
        {
            count+=1;
        }

    }
    printf("\n Count : %d\n",count);
}