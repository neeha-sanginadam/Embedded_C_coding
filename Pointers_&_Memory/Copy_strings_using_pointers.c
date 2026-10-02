#include <stdio.h>

//Copy string using pointers - Take the characters from one string and copy them into another string, using pointers to access the characters.
//for accessing source location and destination use pointers.
int main()
{
    char s[]="Neeha";
    char st[10];
    char *p=s;
    char *q=st;
    int i=0;
    while(*(p)!='\0')
    {
        *q=*p;
        q++;
        p++;
    }
    *q=*p; //to make last element in the string as '\0' --- you can do like this also: *q='\0'
    
    printf("Copied string: %s\n", st);
}