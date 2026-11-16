#include <stdio.h>

#define Hash_table 10

int main()
{
    char s1[]="Neeha";
    char s2[]="aeheN";

    int freq1[52]={0};
    int freq2[52]={0};

    char *p=s1;
    char *q=s2;

    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        {
            freq1[*p-'a']++;
        }
        else if(*p>='A' && *p<='Z')
        {
            freq1[*p-'A'+26]++;
        }
        p++;
    }
    while(*q!='\0')
    {
        if(*q>='a' && *q<='z')
        {
            freq2[*q-'a']++;
        }
        else if(*q>='A' && *q<='Z')
        {
            freq2[*q-'A'+26]++;
        }
        q++;
    }
    for (int i = 0; i < 52; i++)
{
    if (freq1[i] != freq2[i])
    {
        printf("Strings are not anagrams\n");
        return 0;
    }
}
     printf("Strings are  anagrams\n");


}