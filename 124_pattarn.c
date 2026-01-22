// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // 2
    {
        for (j = 1; j <= 4; j++) // 6
        {
            if (i > 2)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
