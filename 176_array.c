// wap to display sum of array element.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : ");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) // 2
    {
        sum = sum + arr[i]; // 102
    }

    printf("\nsum = %d", sum);
}