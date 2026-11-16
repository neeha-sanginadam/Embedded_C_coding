#include <stdio.h>

int main()
{
    char s[]="Neeha";
    char *p=s;
    int freq[52]={0};

    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        {
            freq[*p-'a']++;
        }
        else if(*p>='A' && *p<='Z')
        {
            freq[*p-'A'+26]++;
        }
        p++;
    }
    p=s;
    while(*p!='\0')
    {
        int index=-1;
        if(*p>='a' && *p<='z')
        {
            index = *p-'a';
        }
        else if(*p>='A' && *p<='Z')
        {
            index=*p-'A'+26;
        }
        if(index!=-1 && freq[index]>1)
        {
            printf("First Repeating character: %c\n",*p);
            return 0;
        }
        p++;

    }
    printf("No First Repeating character\n");
}