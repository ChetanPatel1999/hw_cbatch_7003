// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, flag, i;

    for (num = 2; num <= 200; num++)
    {
        flag = 0;
        for (i = 2; i <=(num / 2); i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", num);
        }
    }
}