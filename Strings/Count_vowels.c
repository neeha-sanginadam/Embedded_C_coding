#include <stdio.h>

int main()
{
    char s[]="Neeha";
    char *p=s;
    int count=0;

    while(*p!='\0')
    {
        if(*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u' ||*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U')
        {
            count++;
        }
        p++;
    }
    printf("vowels count:%d\n", count);

}