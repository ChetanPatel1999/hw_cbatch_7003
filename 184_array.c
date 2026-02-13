// Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {400, 6, 80, 3, 56};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // 4, 67, 800, 3, 56
    int max = arr[0];//4
    for (i = 1; i < 5; i++)//5
    {
        if (max < arr[i])
        {
            max = arr[i];//800
        }
    }
    printf("\nmax element = %d", max);
}