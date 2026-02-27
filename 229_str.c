// strcat():- its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    char s1[50];
    printf("enter string1 : ");
    gets(s);
    printf("enter string2 : ");
    gets(s1);
    printf("string1 : %s\n", s);
    printf("string2 : %s\n", s1);

    strcat(s," ");
    strcat(s, s1);
    printf("combine string string : %s\n", s);
}