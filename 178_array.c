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

    a[3] = 900;

    printf("\narray element are after change : ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
}