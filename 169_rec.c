// wap to print reverse number given number to 1
#include <stdio.h>
void fun(int num)
{
    printf("%d ", num); // 5 4 3 2 1
    if (num > 1)
    {
        fun(num - 1);
    }
}
void main()
{
    fun(5);
    printf("\n");
    fun(10);
}