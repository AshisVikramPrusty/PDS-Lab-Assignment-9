#include<stdio.h>
int main()
{
    int i, len;
    char a[100];
    printf("Enter a string: ");
    gets(a);
    char null = '\0';
    char *pnul = &null;
    for(i=0; a[i]!= *pnul ; i++)
    {}
    printf("The length of the string is %d. \n", i);
    return 0;    
}