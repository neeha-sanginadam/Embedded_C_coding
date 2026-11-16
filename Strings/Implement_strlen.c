#include <stdio.h>

int main()
{
    char s[]="Neeha";
    int count=0;
    char *p=s;
    while(*p!='\0')
    {
        count++;
        p++;
    }

    printf("Length of the string (with pointer): %d\n",count);

    //Without pointer
    int counter=0;
    int i=0;
    while(s[i]!='\0')
    {
        counter++;
        i++;
    }
    printf("Length of the string (without pointer): %d\n",counter);
    return 0;
}