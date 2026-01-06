// wap to check given number is prime or not prime.
#include <stdio.h>
void main()
{
    int num, i, res = 0;
    printf("enter a num :");
    scanf("%d", &num);         // 0
    for (i = 1; i <= num; i++) // 5
    {
        if (num % i == 0)
        {
            res++;
        }
    }
    if (res == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}