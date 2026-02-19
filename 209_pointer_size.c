#include <stdio.h>
void main()
{
    char *a;
    short int *b;
    int *c;
    long long int *d;
    printf("char size = %d byte\n", sizeof(a));
    printf("short int size = %d byte\n", sizeof(b));
    printf("int size = %d byte\n", sizeof(c));
    printf("long long int size = %d byte\n", sizeof(d));
}