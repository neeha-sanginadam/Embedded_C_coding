//Parity means checking whether the number of 1 bits is even or odd.
#include <stdio.h>
#include <stdint.h>
void traverse_bits(uint16_t n)
{
    for(uint16_t i=0;i<16;i++)
    {
        //Reading the bits
        printf("%u",(1)&(n>>i));
    }
    printf("\n");
}

int main()
{
    uint16_t n=3;
    uint16_t count=0;
    for (uint16_t i=0;i<16; i++)
    {
        if((1<<i)&n)
        {
            count+=1;
        }
    }
    if(count%2==0)
    {
        printf("Number %u is even parity...\n",n);
    }
    else{
        printf("Number %u is odd parity...\n",n);
    }
}