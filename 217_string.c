#include <stdio.h>
void main()
{
    // char name[] = "rohit";
    char name[] = {'r', 'o', 'h', 'i', 't', '\0'};
    printf("string : %s\n", name);
    printf("%c\n", name[0]);
    printf("%c\n", name[1]);
    printf("%c\n", name[2]);
    printf("%c\n", name[3]);
    printf("%c\n", name[4]);
    printf("%c\n", name[5]);
}