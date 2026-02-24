#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1 = (int *)malloc(20);
    int *ptr2 = (int *)calloc(5, 4);
    int i;
    printf("malloc default values: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ncalloc default values: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}