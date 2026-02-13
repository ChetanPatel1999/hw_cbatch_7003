//  Write a program to input elements into an array and divide them into two separate arrays — one
// containing even numbers and the other containing odd numbers.
#include <stdio.h>
int main()
{
    int arr[8] = {4, 6, 3, 7, 8, 12, 56, 9};
    int i;
    printf("array elements are : \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    int evenArr[8], oddArr[8];
    int eindex = 0, oindex = 0;

    // 4, 6, 3, 7, 8, 12, 56, 9
    for (i = 0; i < 8; i++) // 2
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[eindex] = arr[i];
            eindex++; // 3
        }
        else
        {
            oddArr[oindex] = arr[i];
            oindex++;//2
        }
    }
    printf("\neven array elements are : \n");
    for (i = 0; i < eindex; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\nodd array elements are : \n");
    for (i = 0; i < oindex; i++)
    {
        printf("%d ", oddArr[i]);
    }
}