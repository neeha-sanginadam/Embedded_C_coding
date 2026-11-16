//Count uppercase and lowercase letters separately
#include <stdio.h>

int main()
{
    char s[]="Neeha Sanginadam";
    int freq[52]={0};
    char *p=s;
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
    printf("\n");
    //Lowercase
    for(int i=0; i<26;i++)
    {
        if(freq[i]>0)
        {
            printf("Frequency of %c:%d\n",(char)(i+'a'),freq[i]);
        }
    }
    printf("**************************************\n");
    //Uppercase
    for(int i=26; i<52;i++)
    {
        if(freq[i]>0)
        {
            printf("Frequency of %c:%d\n",(char)(i+'A'-26),freq[i]);
        }
    }

    return 0;
}