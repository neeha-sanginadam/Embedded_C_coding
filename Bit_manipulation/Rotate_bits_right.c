//Rotate bits right
//Rotate bits right with pos position: The bits that fall off the right side come back on the left side.
//Rotate a 16-bit number right by k positions.
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
    int16_t x=10;
    int16_t y=0, k=2;
    traverse_bits(x);
    for(uint16_t i=0;i<16;i++)
    {
        //take each bit at the position from x and shift that by k positions and do OR with y.
        //1.take the bit
        uint16_t bit =(x>>i)&1;
        //2. Find the new position
        uint16_t pos=((i-k+16)%16);
        //apply it  
        y|=(bit<<pos);      


    }

    
    traverse_bits(y);

    
}

/*
Left shift:    bits falling off are LOST
Rotate left:   bits falling off come back on the RIGHT
*/