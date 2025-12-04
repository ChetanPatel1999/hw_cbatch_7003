// Write a program to print any three digit number in reverse order.
#include <stdio.h>
void main()
{
    int num, r, s, t, rev;
    printf("enter a num : ");
    scanf("%d", &num); // 572
    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    rev = t * 100 + s * 10 + r;
    printf("reverse number = %d", rev);
}