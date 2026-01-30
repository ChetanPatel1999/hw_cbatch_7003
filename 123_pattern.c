// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++) //5
    {
        for (j = 1; j <= (i * 2) - 1; j++) // 3
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
