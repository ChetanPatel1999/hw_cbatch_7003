// strcpy():-
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    char s1[50];
    printf("enter string : ");
    gets(s);
    printf("string : %s\n", s);
    // strcpy(s1, "RAM");
    strcpy(s1, s);
    printf("copy string : %s\n", s1);
}