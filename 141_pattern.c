// nested loop example
#include <stdio.h>
int main()
{
    int i, j, a = 0;
    for (i = 1; i <= 5; i++) // 5
    {
        for (j = 1; j <= i; j++) // 3
        {
            printf("%d ", a);//0
            a = 1 - a;
        }
        printf("\n");
    }
}
