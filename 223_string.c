//wap to print length of string.
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s);
    printf("string : %s\n", s);
    int count = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("length of string : %d",count);
}