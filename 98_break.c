// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, flag = 0, i;
    printf("enter a num : ");
    scanf("%d", &num); //  83
    for (i = 2; i < (num / 2); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("num is not prime");
    }
    else
    {
        printf("num is prime");
    }
}