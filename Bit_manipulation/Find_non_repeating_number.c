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
    uint16_t a[]={1,1,2,2,3};
    uint16_t result=a[0];
    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
    {
        result^=a[i];
    }
    printf("The non repeating number: %u\n",result);
    
}