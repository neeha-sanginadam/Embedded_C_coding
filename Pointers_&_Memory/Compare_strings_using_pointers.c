#include <stdio.h>

//Compare strings using pointers

int main()
{
    char s[]="Neeha";
    char st[]="Neeha123";
    char *p=s;
    char *q=st;
    while(*p!='\0' && *q!='\0')
    {
        if(*p!=*q)
        {
            printf("The string-1: %s and string-2: %s are not same.\n",s,st);
            return 0;
        }
        p++;
        q++;
    }
    if (*p!='\0' || *q!='\0')
    {
        printf("The string-1: %s and string-2: %s are not same.\n",s,st);

    }
    else
    {
    printf("The string-1: %s and string-2: %s are same.\n",s,st);
    }
    return 0;
}