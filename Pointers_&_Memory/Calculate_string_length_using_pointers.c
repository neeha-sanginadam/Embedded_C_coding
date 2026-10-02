#include <stdio.h>

//Calculate string length using pointers
int main()
{
    char s[]= "Sanginadam";
    char *p=s;
    int i=0;
    while(*(p+i)!='\0')
    {
        i+=1;
    }
    printf("string length: %d\n", i);
}