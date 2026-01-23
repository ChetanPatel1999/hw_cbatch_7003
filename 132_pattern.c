// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 67
    {
        for (j = 65; j <= i; j++) // 65
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
