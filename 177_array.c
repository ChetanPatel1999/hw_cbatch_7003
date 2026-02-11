// wap to print only even element from array.
#include <stdio.h>
void main()
{
    int a[7] = {3, 5, 2, 6, 4, 7, 8};
    int i;
    printf("array element are : ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\narray even element are : ");
    for (i = 0; i < 7; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\narray odd element are : ");
    for (i = 0; i < 7; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
        }
    }
}