// Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
void main()
{
    int n, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 478
    while (n > 0)
    {
        rem = n % 10;
        res = res + rem;
        n = n / 10;
    }
    printf("sum of individual digit = %d", res);
}