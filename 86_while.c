// Write a program that takes a number and repeatedly finds the sum of its
//  digits until only a single digit remains (using nested while).
#include <stdio.h>
void main()
{
    int n, rem, res = 0, c;
    printf("enter a num : ");
    scanf("%d", &n); // 679999
    while (1)
    {
        while (n > 0) // 0
        {
            rem = n % 10;
            res = res + rem; // 4
            n = n / 10;      // 0
        }
        n = res; // 4
        c = 0;
        while (n > 0)
        {
            c++;        // 1
            n = n / 10; // 0
        }
        if (c == 1)
        {
            break;
        }
        n = res;
        res = 0;
    }
    printf("sum of individual digit = %d", res);
}