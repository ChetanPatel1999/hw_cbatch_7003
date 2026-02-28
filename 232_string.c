#include <stdio.h>
#include <string.h>
int compare(char s1[], char s2[])
{
    int i;
    if (strlen(s1) != strlen(s2))
    {
        return 0;
    }
    else
    {
        for (i = 0; i < strlen(s1); i++) // 5
        {
            if (s1[i] != s2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    if (compare(s1, s2))
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}