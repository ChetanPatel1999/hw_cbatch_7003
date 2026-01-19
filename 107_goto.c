// exemple of goto stmnt
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("hello world institute \n");
    i++;
    if (i <= 5)
    {
        goto start;
    }
}