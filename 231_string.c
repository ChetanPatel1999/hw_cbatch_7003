#include <stdio.h>
#include <string.h>
void main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    int i;
    if (strlen(s1) != strlen(s2))
    {
        printf("string are not same");
    }
    else
    {
        int isSameString = 1;
        for (i = 0; i < strlen(s1); i++)//5
        {
            if (s1[i] != s2[i])
            {
                isSameString = 0;
                break;
            }
        }
        if (isSameString)
        {
            printf("string are same");
        }
        else
        {
            printf("string are different");
        }
    }
}