// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 3
    {
        for (j = 1; j <= i; j++) //2
        {
            if (j % 2 == 0)
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
