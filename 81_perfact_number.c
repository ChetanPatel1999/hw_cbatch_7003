// wap to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int num, i, res = 0;
    printf("enter a num :");
    scanf("%d", &num);         // 6
    for (i = 1; i <= num; i++) // 2
    {
        if (num % i == 0)
        {
            res = res + i;//3
        }
    }
    if (res == num * 2)
    {
        printf("num is perfact");
    }
    else
    {
        printf("num is not perfact");
    }
}