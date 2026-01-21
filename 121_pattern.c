// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = i; j >= 1; j--) // 6
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
