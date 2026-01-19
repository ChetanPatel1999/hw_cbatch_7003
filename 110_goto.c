// exemple of goto stmnt
#include <stdio.h>
void main()
{
    int i = 1;
    printf("hello world institute \n");
    i++; // 2
    if (i <= 5)
    {
        goto start;
    }
    printf("stmnt1\n");
    printf("stmnt2\n");
    printf("stmnt3\n");
start:
    printf("after lable");
}