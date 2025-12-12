// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a); // 89
    printf("enter b : ");
    scanf("%d", &b); // 456
    a > b ? printf("greatest num = %d", a) : printf("greatest num = %d", b);
}