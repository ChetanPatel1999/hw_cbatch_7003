// nested loop example
#include <stdio.h>
int main()
{
    int i, j, a = 1;
    for (i = 1; i <= 4; i++) // 2
    {
        for (j = 1; j <= i; j++) // 6
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}
