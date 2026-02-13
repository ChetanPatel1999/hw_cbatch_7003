#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int maxElement(int arr[], int n)
{
    int max = arr[0], i;    // 4
    for (i = 1; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i]; // 800
        }
    }
    return max;
}
void main()
{
    int arr1[5] = {3, 6, 23, 7, 8};
    int arr2[7] = {3, 600, 23, 7, 8, 7, 233};
    int arr3[10] = {3, 6, 230, 7, 8, 7, 233, 5, 1, 34};

    printf("arr1 elements are : \n");
    display(arr1, 5);
    printf("\narr1 max element = %d", maxElement(arr1, 5));


    printf("\narr2 elements are : \n");
    display(arr2, 7);
    printf("\narr2 max element = %d", maxElement(arr2, 7));


    printf("\narr3 elements are : \n");
    display(arr3, 10);
    printf("\narr3 max element = %d", maxElement(arr3, 10));
}