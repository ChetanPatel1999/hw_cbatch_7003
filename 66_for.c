// wap to print multiple of 6 1 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 30
    for (i = 1; i <= n; i++)//
    {
        if (i % 6 == 0)
        {
            printf("%d ", i);
        }
    }
}