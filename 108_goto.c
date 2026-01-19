// wap to print square 1 to 10 using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("%d\n", i * i); // 4
    i++;                   // 2
    if (i <= 10)
    {
        goto start;
    }
}