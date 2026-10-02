#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=9474;
    if(num<0)
    {
        printf("Number %d is not Armstrong number\n",num);
        return 0;
    }

    int temp=num;
    int digits=0;
    int sum=0;
    if(temp==0)
    {
        digits=1;
    }
    else{
        while(temp)
        {
            digits++;
            temp/=10;
        }
    }
    temp=num;
    while(temp)
    {
        int digit = temp%10;
        int power=1;
        for(int i=0;i<digits;i++)
        {
            power*=digit;
        }
        sum+=power;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("Number %d is Armstrong number\n",num);
    }
    else
    {
        printf("Number %d is not Armstrong number\n",num);

    }
}