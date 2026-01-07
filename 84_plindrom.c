// Write a program that takes a number as input and displays its digits in
// reverse order as a new number.
#include <stdio.h>
void main()
{
    int n, rem, temp, res = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 121
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        res = res * 10 + rem;
        n = n / 10;
    }
    if (res == temp)
    {
        printf("num is plindrom");
    }
    else
    {
        printf("num is not plindrom");
    }
}