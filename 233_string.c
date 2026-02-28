// take a string and swap string frist char with string last char.
#include <stdio.h>
#include <string.h>
void main()
{
    char s[] = "telcome bor";
    printf("%s\n", s);
    char temp;
    temp = s[0];
    s[0] = s[strlen(s) - 1];
    s[strlen(s) - 1] = temp;
    printf("%s\n", s);
}