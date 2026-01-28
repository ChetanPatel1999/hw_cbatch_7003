#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--) // 4
    {
        for (s = i; s > 1; s--) // 4 3 2 1 0
        {
            printf("  ");
        }
        for (j = i; j <= 5; j++) // 1 2 3 4 5
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}