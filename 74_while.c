// Write a program takes a number as input and prints each digit of the
//  number in reverse order, with each digit displayed on a separate line.
#include <stdio.h>
void main()
{
    int n, rem;
    printf("enter a num : ");
    scanf("%d", &n);// 478
    while (n > 0)
    {
        rem = n % 10;
        printf("%d\n", rem);
        n = n / 10;
    }
}