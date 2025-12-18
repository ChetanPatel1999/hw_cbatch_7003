// Write a program to check whether a character is an alphabet or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 'z' || ch >= 65 && ch <= 90)
    {
        printf("char is alphabet");
    }
    else
    {
        printf("char is not alphabet");
    }
}