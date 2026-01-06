// wap to print fators count of given number.
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
    printf("factors count = %d", res);
}