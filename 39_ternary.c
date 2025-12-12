// Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char input;
    printf("enter a alphabet : ");
    scanf("%c", &input); //A
    input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'
        ? printf("alphabet is vowel")
        : printf("alphabet is consonant");
}