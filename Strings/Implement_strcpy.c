#include <stdio.h>
char *strcpy1(char *str, char *q)
{
    char *p=q;
    while(*str!='\0')
    {
        *p=*str;
        p++;
        str++;
    }
    *p='\0';
    return q;
}

int main()
{
    char a[]="Neeha";
    char b[10];
    printf("Copied array:%s",strcpy1(a,b));
    return 0;

}

/*
Time complexity: O(n)
Auxiliary space: O(1)
*/