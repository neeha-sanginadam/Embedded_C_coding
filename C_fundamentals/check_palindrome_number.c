//Check whether a number is palindrome
#include <stdio.h>
int reverse_integer(int x)
{
    int r=0;
    if(x<0 || (x % 10 ==0 && x!=0))
    {
        return 0;
    }
    while(x>r)
    {
        r=10*(r)+x%10;
        x=x/10;
    }
    return (x==r || x==r/10);
}

int main()
{
    int n=123322;
    int result=reverse_integer(n);
    if(result)
    {
        printf("%d is Palindrome\n", n);
    }
    else{
        printf("%d is not Palindrome\n",n);
    }

}
/*
we only need to compare the first half of the number with the reverse of the second half.
For our half-reversal palindrome code:

Negative number → -121 → not considered palindrome.
Zero → 0 → palindrome.
Ends with 0 → 120 → not palindrome, because reversing gives 21.
Single digit → 7 → always palindrome.
Even digits → 1221 → compare both halves directly.
Odd digits → 12321 → ignore the middle digit while comparing.
*/