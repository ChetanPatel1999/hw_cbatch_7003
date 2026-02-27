// wap to convert string lower to upper case.
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // hello\0
    printf("string : %s\n", s);
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("uperr case string : %s", s);
}