#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2, i;
    printf("enter dynamic array size : ");
    scanf("%d", &n1);
    int *ptr = (int *)malloc(n1 * sizeof(int));
    int *temp = ptr;
    printf("dynamic array address are : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    printf("\nenter array element  : ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    printf("\nenter how many element size you incraese  : ");
    scanf("%d", &n2);
    n2 = n1 + n2;
    ptr = temp;
    ptr = (int *)realloc(ptr, n2 * sizeof(int));
    temp = ptr;
    printf("\nnew increase dynamic array address are : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    ptr = ptr + n1;
    printf("\nenter more array element  : ");
    for (i = 0; i < n2 - n1; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\narray element  are : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}