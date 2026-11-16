#include <stdio.h>

int main()
{
    char s[] = "Embedded C Programming is fun";
    char *p=s;
    int count=0;
    while(*p!='\0')
    {
        if(*p==' ')
        {
            count++;
        }
        p++;

    }
    printf("Count space:%d\n",count);
}