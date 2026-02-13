//. Write a program to display the array elements in reverse order.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int i, arr[n];
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element in reverse order : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}