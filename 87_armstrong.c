// Write a program that takes a number as input and checks whether it is an
//  Armstrong number or not.
#include <stdio.h>
void main()
{
    int num, sum = 0, rem, temp, res, i;
    printf("enter a num : ");
    scanf("%d", &num); // 1589
    temp = num;
    int c = 0;
    while (num)
    {
        c++;
        num = num / 10;
    }
    num = temp;
    while (num)
    {
        rem = num % 10;
        res = 1;
        for (i = 1; i <= c; i++)
        {
            res = res * rem;
        }
        sum = sum + res;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}