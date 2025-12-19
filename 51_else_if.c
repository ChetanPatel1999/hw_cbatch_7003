// Write a program to find greatest number among has given three numbers.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a); // 156
    printf("enter b : ");
    scanf("%d", &b); // 66
    printf("enter c : ");
    scanf("%d", &c); // 347
    if (a > b && a > c)
    {
        printf("greatest num = %d", a);
    }
    else if (b > c)
    {
        printf("greatest num = %d", b);
    }
    else
    {
        printf("greatest num = %d", c);
    }
}
