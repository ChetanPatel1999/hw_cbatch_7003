// wap to print sum 1 to n and average.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) // 3
    {
        sum = sum + i; // 55
        i++;
    }
    printf("sum of 1 to %d = %d\n", n, sum);
    printf("average of 1 to %d = %.2f\n", n, sum / (float)n);
}