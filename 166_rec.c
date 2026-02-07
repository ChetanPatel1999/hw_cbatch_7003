// wap to print sum 1 to n using recursion.
#include <stdio.h>
int fun(int num)
{
    static int i = 1, sum = 0;
    sum = sum + i;
    i++;
    if (i <= num)
    {
        fun(num);
    }
    return sum;
}
void main()
{
    int res = fun(10);
    printf("sum = %d", res);
}