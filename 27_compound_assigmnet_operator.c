#include <stdio.h>
void main()
{
    int a, b;
    a = 12;
    b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // a += b;   //a=a+b
    // a -= b;
    // a *= b;
    // b *= b;
    // b += a;
    a += 10;
    printf("a = %d\n", a); // 7
    printf("b = %d\n", b); // 5
}