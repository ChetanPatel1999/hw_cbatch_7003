// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 'A'; i <= 'E'; i++) // 2
    {
        for (j = 'A'; j <= 'E'; j++) // 2
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
