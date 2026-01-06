// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, flag = 1;
    printf("enter a num :");
    scanf("%d", &num); //
    if (num == 0 || num == 1)
    {
        printf("not prime");
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("prime number");
        }
        else
        {
            printf("not prime number");
        }
    }
}