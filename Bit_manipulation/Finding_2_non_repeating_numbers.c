//Every number appears exactly twice, except two numbers that appear once each. Find those two numbers.
//Using XOR and you will get 2 numbers x^y..but that's not enough to know which two numbers are x and y individually.
//Ans: ind a bit where the two non-repeating numbers differ, and use that bit to separate the numbers into two groups.
//O(n) time, O(1) extra space


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
    uint16_t n[]={1,1,2,3,3,4};
    int result=0;
    for(int i=0;i<sizeof(n)/sizeof(n[0]);i++)
    {
        result^=n[i];
    }
    //Now we have x^y in result. to find the rightmost differ bit in x and y we will create mask

    //creating mask by finding the right most differ bit
    uint16_t mask=result&(-result); //number AND with 2's complement (masking to find the rightmost bit differ)
    uint16_t num1=0;
    uint16_t num2=0;
    for(uint16_t i=0;i<sizeof(n)/sizeof(n[0]);i++)
    {
        if(n[i]&mask)
        {
            num1^=n[i];
        }
        else{
            num2^=n[i];
        }

    }
    printf("Non repeating numbers: %u and %u\n",num1, num2);

}