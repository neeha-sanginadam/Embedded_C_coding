#include <stdio.h>

int main()
{
    char s[]="Neeha Sanginadam";
    int freq[52]={0};
    char *p=s;
    char *r=s;
    char **q=&r;
    int i=0;
    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        {
            freq[*p-'a']++;
            if(freq[*p-'a']>1)
            {
                p++;
                continue;   
            }
        }
        else if(*p>='A' && *p<='Z')
        {
            freq[*p-'A'+26]++;
            if(freq[*p-'A'+26]>1)
            {
                p++;
                continue;   
            }
        }
        **q=*p;
        (*q)++;
        p++;
    }
    **q='\0';
    printf("%s\n",s);
}