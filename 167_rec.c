// wap to print 1 to 10 numbers using recursion.
#include <stdio.h>
void table(int num, int i)
{
    printf("%d * %d = %d\n", num, i, num * i);
    i++; // 2
    if (i <= 10)
    {
        table(num, i);
    }
}
void main()
{
    table(7, 1);
    printf("---------------\n");
    table(12, 1);
}