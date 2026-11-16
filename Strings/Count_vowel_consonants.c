#include <stdio.h>

int main()
{
    char s[] = "Embedded C Programming!";
    char *p=s;
    int vowels=0;
    int consonants=0;

    while(*p!='\0')
    {
        if((*p>='a' && *p<='z')||(*p>='A' && *p<='Z'))
        {

        if(*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u' ||*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U')
        {
            vowels++;
        }
        else {
            consonants++;
        }
    }
        p++;
    }
    printf("vowels count:%d\n", vowels);
    printf("consonants count:%d\n", consonants);

}