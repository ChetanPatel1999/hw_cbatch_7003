// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 97; i <= 101; i++) // 2
    {
        for (j = 97; j <= 101; j++) // 2
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
