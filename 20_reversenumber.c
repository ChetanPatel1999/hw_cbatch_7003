// Write a program to print any three digit number digit in  reverse order.
#include <stdio.h>
void main()
{
    int num, r, s, t;
    printf("enter a num : ");
    scanf("%d", &num); // 572
    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    printf("reverse number = %d%d%d", t, s, r);
}