//.  Write a program to copy elements from one array to another.#include <stdio.h>
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int newArr[5];
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // copy one array into another array
    for (i = 0; i < 5; i++)
    {
        newArr[i] = arr[i];
    }

    printf("\nNew array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", newArr[i]);
    }
}