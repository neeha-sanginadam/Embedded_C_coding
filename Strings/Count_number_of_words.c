#include <stdio.h>

int main()
{
    char s[]="Neeha is strong";
    char *p=s;
    int count=0;
    while(*p!='\0')
    {
        if(*p == ' ')
        {
            count++;
        }
        p++;
    }
    count++;
    printf("Total number of words in a string:%d\n", count);
}