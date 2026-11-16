#include <stdio.h>

int main()
{
    char s[]="Neeha Sanginadam";
    char *p=s;
    char *w=s;
    char **q=&w;
    while(*p!='\0')
    {
        if(*p!=' ')
        {
            **q=*p;
            (*q)++;
            
        }
        p++;
    }
    **q='\0';
    printf("%s\n",s);
}