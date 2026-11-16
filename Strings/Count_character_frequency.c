#include <stdio.h>

int main()
{
    char s[] = "neeha";
    int freq[26]={0};

    char *p=s;
    while(*p!='\0')
    {
        freq[*p-'a']++;
        p++;
    }
    for (int i = 0; i < 26; i++)
    {
    if (freq[i] > 0)
    {
        printf("%c : %d\n", 'a' + i, freq[i]);
    }
    }
    
}