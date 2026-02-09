// wap to  1 to 10 numbers using recursion.
#include <stdio.h>
void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    if (num % 2 == 0)
    {
        printf("%d ", num);
    }
}
void main()
{
    fun(20);
}