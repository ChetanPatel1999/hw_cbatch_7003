// wap to print 1 to 10 numbers using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("%d\n", i);
    i++; // 3
    if (i <= 10)
    {
        fun();
    }
}
void main()
{
    fun();
}