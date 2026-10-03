//Count Set Bits — Brian Kernighan's Algorithm
//Brian Kernighan's algorithm gives us a smarter way: it removes one set bit (1) from the number in every iteration.
//n = n & (n - 1); ---- This clears the rightmost set bit of n.
#include <stdio.h>
#include <stdint.h>

void traverse_bits(int n)
{
    for(int i=0;i<16;i++)
    {
        printf("%d",(1)&(n>>i));
    }
    printf("\n");
}

int main()
{
    uint16_t n=10;
    uint16_t count=0;
    traverse_bits(n);

    while(n)
    {
        n=n & (n-1);
        count++;
    }
    printf("Number of set bits: %u\n",count);
}