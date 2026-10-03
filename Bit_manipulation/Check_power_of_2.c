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
    if(n!=0 && ((n-1)&n)==0)
    {
        printf("%u is Power of 2\n",n);
    }
    else{
        printf("%u is not power of 2\n",n);
    }
    
}