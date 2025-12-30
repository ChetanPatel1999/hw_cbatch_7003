// wap to print table of given number.
// 4 * 1 = 4
// 4 * 2 = 8
// 4 * 3 = 12
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 4
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}