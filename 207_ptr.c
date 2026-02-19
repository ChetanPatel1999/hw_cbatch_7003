// we can change variable value using pointer.if pointer have address
// that variable.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    *ptr = 90;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
}