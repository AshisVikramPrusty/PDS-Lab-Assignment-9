#include<stdio.h>
#include<string.h>
int main()
{
    int i, cons=0, vow=0, m;
    char a[100];
    printf("Enter string: ");
    gets(a);
    char *pstr = a;
    m = strlen(a);
    for (i=0; i<m; i++)
    {
        if (*pstr == 'a' || *pstr == 'e' || *pstr == 'i' || *pstr == 'o' || *pstr == 'u' || *pstr == 'A' || *pstr == 'E' || *pstr == 'I' || *pstr == 'O' || *pstr == 'U')
            vow++;
        else 
            cons++; 
        pstr++;
    }
    printf("The word %s contains %d vowels and %d consonants.", a, vow, cons);
    return 0;
}