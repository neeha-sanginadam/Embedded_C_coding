#include <stdio.h>

int main()
{
    char s[] = "Neeha123Embedded456";
    int count=0;

    char *p=s;
    while(*p!='\0')
    {
        if(*p>='0'&& *p<='9')
        {
            count++;
        }
        p++;
    }
    printf("Digit Count:%d\n",count);
}