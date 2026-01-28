#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)//5
    {
        for (s = 1; s < i; s++) // 0 1 2 3 4
        {
            printf("  ");
        }
        for (j = 1; j <= 5; j++) // 5 4 3 2 1
        {
            printf("* ");
        }
        printf("\n");
    }
}