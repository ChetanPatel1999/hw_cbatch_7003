//Write a program that takes a number as input and counts how many digits 
// it contains.
#include <stdio.h>
void main()
{
    int n, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 68
    while (n > 0)
    {
        res++;
        n = n / 10;
    }
    printf("digit count in number =  %d", res);
}