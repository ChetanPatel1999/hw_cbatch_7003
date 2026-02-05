#include <stdio.h>
int cube(int num)
{
    return num * num * num;
}

int greatestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    printf("ans = %d\n", factorial(5));
    printf("res = %d\n", factorial(4));
    printf("factorial of %d = %d\n", 3, factorial(3));

    int res;
    res = factorial(8);

    // individulaSum(res);

    // printf("greates num = %d \n", greatestNum(126, 67));
    // printf("greates num = %d \n", greatestNum(12, 67));
}