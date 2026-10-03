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
    int16_t n= 24;
    int16_t m=-28;
    traverse_bits(n);
    printf("\n");
    traverse_bits(m);
    printf("\n");
    if ((n^m)&(1<<15))
    {
        printf("Numbers %u and %u are having opposite signs.\n",n,m);

    }
    else{
        printf("Numbers %u and %u are having same signs.\n",n,m);

    }


    
}