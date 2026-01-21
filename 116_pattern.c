// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = i; j <= 5; j++) //
        {
            printf("* ");
        }
        printf("\n");
    }
}
