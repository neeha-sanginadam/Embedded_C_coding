#include <stdio.h>

int main()
{
    char s[]="nurses run";
    char *p=s;
    char *q=s;
    while(*q!='\0')
    {
        q++;

    }
    q--;
    while(p<q)
    {
        while(p<q && *p!=' ')
        {
            p++;
        }
        while(p<q && *q!=' ')
        {
            q--;
        }
        if(*p!=*q)
        {
            printf("Not Palindrome string\n");
            return 0;
        }
        
        p++;
        q--;

    }
    printf("Palindrome String\n");
    return 0;
}

