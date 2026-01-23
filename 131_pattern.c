// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 2
    {
        for (j = 65; j <= 69; j++) // 2
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}
