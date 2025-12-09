#include <stdio.h>
void main()
{
    int a, b, res;
    a = 12;
    b = 8;
    res = a + b;
    printf("addition : %d\n", res);

    res = a - b;
    printf("subtraction: %d\n", res);

    res = a * b;
    printf("multiplication: %d\n", res);

    res = a / b;
    printf("division: %d\n", res);

    res = a % b;
    printf("modules: %d\n", res);
}