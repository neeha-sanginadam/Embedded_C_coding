#include <stdio.h>
// Concatenating strings using pointers : basically implementing strcat() from string.h
int main()
{
    char s[30]="Neeha";
    char st[]="Sanginadam";
    char *p = s;
    char *q=st;
    while(*p!='\0')
    {
        p++;
    }
    *p=' ';
    p++;
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("String concatenate of two strings: %s \n",s);
}