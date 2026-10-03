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
    uint16_t a[]={1,2,3,5};
    uint16_t l=sizeof(a)/sizeof(a[0]);
    uint16_t result= (a[l-1]*(a[l-1]+1))/2;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        result-=a[i];
    }
    printf("The Missing number: %u\n",result);

    //Using XOR
    uint16_t sum=0;
    for (uint16_t i = 1; i <= l + 1; i++)
    {
        sum ^= i;
    }
    for (uint16_t i = 0; i < l ; i++)
    {
        sum ^= a[i];
    }
    printf("The Missing number: %u\n",sum);

    
}