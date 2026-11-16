#include <stdio.h>

int main()
{
    char s[]="Neeha";
    char f='e';
    char *p=s;
    int i=0;
    while(*p!='\0')
    {
        i++;
        if(*p==f)
        {
            printf("First occurance of character %c is at position:%d\n", *p, i);
            return 0;
        }
        p++;
    }
    printf("Character '%c' not found\n", f);
    return 0;
}