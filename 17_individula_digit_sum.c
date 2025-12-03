//. Write a program to find sum of individuals digits of any three digits
// number.
#include <stdio.h>
void main()
{
    int num, r, s, t, sum;
    printf("enter a num : ");
    scanf("%d", &num);
    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    sum = r + s + t;
    printf("sum of individual digit  = %d", sum);
}