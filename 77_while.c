// Write a program that takes a number as input and displays its digits in 
// reverse order as a new number.
#include <stdio.h>
void main()
{
    int n, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &n); //342
    while (n > 0)
    {
        rem = n % 10;
        res = res * 10 + rem;//243
        n = n / 10;
    }
    printf("reverse num :- %d", res);
}