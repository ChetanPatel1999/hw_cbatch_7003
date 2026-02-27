// wap to print length of string.
#include <stdio.h>
#include <string.h>
int length(char str[])
{
    int count = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s);
    printf("string : %s\n", s);

    printf("length of string : %d", strlen(s));
}