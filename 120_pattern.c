// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) //1
    {
        for (j = 5; j >= i; j--) // 2
        {
            printf("%d ", i); // 5
        }                     // 4 4
        printf("\n");         // 3 3 3
    }                         // 2 2 2 2
}
