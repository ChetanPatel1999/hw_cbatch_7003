// wap to print even number series 1 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    printf("even number series : ");
    for (i = 1; i <= n; i++) //
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}