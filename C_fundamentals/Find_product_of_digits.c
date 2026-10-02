#include <stdio.h>
#include <stdlib.h>

int main()
{
    int original = 1234;
    long long product=1;
    int num=abs(original);
    if (num==0)
    {
        product=0;
    }
    else{
    while(num)
    {
        product*=(num%10);
        num=num/10;
    }
}
    printf("Product of digits in %d: %lld\n",original,product);

}