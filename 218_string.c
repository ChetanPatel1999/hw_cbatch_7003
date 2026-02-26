// visit all character of string using null char
#include <stdio.h>
void main()
{
    char name[] = "rohit patel";
    int i;
    for (i = 0; name[i] != '\0'; i++)//5
    {
        printf("%c ", name[i]);
    }
}