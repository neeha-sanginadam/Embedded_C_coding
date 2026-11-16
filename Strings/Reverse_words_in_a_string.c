#include <stdio.h>

int main()
{
    char s[]="Neeha";
    char *p=s;
    char *temp=s;
    char **q=&temp;

    while(**q!='\0')
    {
        (*q)++;
    }
    (*q)--;
    char **r=&p;
    char e;
    while(*r<*q)
    {
        e=**r;
        **r=**q;
        **q=e;
        (*r)++;
        (*q)--;

    }
    printf("%s\n",s);
}