// with return type with parameter
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = addition(12, 5);
    printf("sum = %d\n", res);

    printf("sum = %d\n", addition(15, 20));

    int r, s;
    r = 100;
    s = 200;
    printf("sum = %d", addition(r, s));
}