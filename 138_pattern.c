#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 1
    {
        for (s = i; s < 5; s++) // 4 3 2 1 0
        {
            printf("  ");
        }
        for (j = 6 - i; j <= 5; j++) // 1 2 3 4 5
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}