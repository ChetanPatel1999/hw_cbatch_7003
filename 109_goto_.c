// wap to print square 1 to 10 using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    if (i % 2 == 0)
    {
        printf("%d\n", i); 
    }
    i++; 
    if (i <= 10)
    {
        goto start;
    }
}