#include <stdio.h>

bool strcmp1(char *s, char *t)
{
    while(*s!='\0' && *t!='\0')
    {
        if(*s!=*t)
        {
            return false;
        }
        s++;
        t++;
    }
    while(*s!='\0' || *t!='\0')
    {
        return false;
    }
    return true;
}

int main()
{
    char s1[]="Neeha1";
    char s2[]="Neeha";

    char *p=s1;
    char *q=s2;
    bool result=true;

    while(*p!='\0' && *q!='\0')
    {
        if(*p!=*q)
        {
            result=false;
            break;
        }
        p++;
        q++;
    }
    while(*p!='\0' || *q!='\0')
    {
            result=false;
            break;

    }
    if(result)
    {
            printf("Strings %s and %s are equal\n",s1, s2);

    }
    else{
        printf("Strings %s and %s are not equal\n",s1, s2);

    }
    

    printf("********************************************************\n");

    if(strcmp1(s1,s2))
    {
            printf("Strings %s and %s are equal through strcmp\n",s1, s2);
    }
    else
    {
            printf("Strings %s and %s are not equal through strcmp\n",s1, s2);

    }
    return 0;

}