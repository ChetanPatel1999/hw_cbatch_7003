// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++) //2
    {
        for (j = 1; j <= (i * 2) - 1; j++) // 6
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
