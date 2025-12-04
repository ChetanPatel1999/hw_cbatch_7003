// Write a program to convert upper char to lower char.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    printf("original char = %c\n", ch);
    ch = ch + 32;
    printf("lower char = %c\n", ch);
}