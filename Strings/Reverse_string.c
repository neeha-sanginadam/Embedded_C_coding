#include <stdio.h>

int main()
{
    char s[]="Neeha";
    char *p=s;
    char *q=s;
    while(*q!='\0')
    {
        q++;
    }
    q--;
    while(p<q)
    {
        char temp=*p;
        *p=*q;
        *q=temp;

        p++;
        q--;
    }
    printf("Reverse String: %s\n",s);

    
}