#include <stdio.h>
void main()
{
    int a = 12, b;
    // b = ++a; //pre-increamnet :- first increase a value by one then increasing value assign in b
    b = a++;               // post-increament :- first assign a value in b then increase a value by one
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12
}