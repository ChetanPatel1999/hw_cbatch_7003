// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, count = 0, i;
    printf("enter a num : ");
    scanf("%d", &num); // 443
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            break;
        }
    }
    if (count == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}