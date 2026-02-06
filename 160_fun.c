#include <stdio.h>
int fun(int a)
{
    return 45.67 + a;
}

char upperChar(char ch)
{
    return ch - 32;
}

int evenOdd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int num = 17;
    if (evenOdd(num))
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
    // printf("uper char = %c", upperChar('q'));
    // printf("%d\n", fun(12));
}