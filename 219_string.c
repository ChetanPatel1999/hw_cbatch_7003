// wap to count total vovel in string.
#include <stdio.h>
void main()
{
    char name[] = "rohit patel";
    int i, c = 0;
    printf("string is : %s\n", name);
    for (i = 0; name[i] != '\0'; i++) // 5
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'o' || name[i] == 'i' || name[i] == 'u')
        {
            c++;
        }
    }
    printf("total vovels in string : %d", c);
}