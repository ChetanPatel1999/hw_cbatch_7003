// wap to print reverse string of given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello
    printf("string : %s\n", s);
    int i, c = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        c++;
    }
    printf("reverse string : ");
    // for (i = c-1; i >= 0; i--)
    // {
    //     printf("%c", s[i]);
    // }
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}