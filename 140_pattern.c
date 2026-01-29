#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--) // 4
    {
        for (s = i; s > 1; s--) // 0
        {
            printf("  ");
        }
        for (j = 1; j <= (i * 2) - 1; j++) //
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}