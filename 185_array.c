//  Write a  program that accepts some integers from the user and finds the highest value and the input
// position.
#include <stdio.h>
void main()
{
    int arr[5] = {400, 6, 800, 3, 5666};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // 4, 67, 800, 3, 56
    int max = arr[0]; // 4
    int pos = 0;
    for (i = 1; i < 5; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i]; // 800
            pos = i;
        }
    }
    printf("\nmax element = %d", max);
    printf("\nposition element = %d", pos+1);
}