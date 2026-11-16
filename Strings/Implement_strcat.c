#include <stdio.h>

char *strcat1(char *s, char *d)
{
    char *p1=s;
    char *q1=d;
    while(*p1!='\0')
    {
        p1++;
    }

    while(*q1!='\0')
    {
        *p1=*q1;
        p1++;
        q1++;
    }
    *p1='\0';
    return s;

}

int main()
{
    char s1[20]="Neeha";
    char s2[]="Sanginadam";

    char *p=s1;
    char *q=s2;

    while(*p!='\0')
    {
        p++;
    }
    *p=' ';
    p++;

    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("Concatenated string: %s\n",s1);

    char d[]="Neeha";
    char s[20]="Sanginadam";
    
    printf("Concatenated string with strcat: %s\n",strcat1(s,d));

    
    return 0;
}

/*
Time Complexity: O(n + m)
Auxiliary space: O(1)
*/