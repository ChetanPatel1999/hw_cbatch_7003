// nested loop example
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 69; i >= 65; i--) // 67
    {
        for (j = 69; j >= 65; j--) // 65
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
