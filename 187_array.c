//  Write a program to count how many elements in an array are prime and how many are not prime.
#include <stdio.h>
void main()
{
    int arr[8] = {4, 6, 3, 7, 8, 17, 56, 23}, i;
    printf("array elements are : \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    // count prime or not prime element in array
    int c, j, primeCount = 0, notPrimeCount = 0, num;
    // 4, 6, 3, 7, 8, 17, 56, 23
    for (i = 0; i < 8; i++) // 1
    {
        num = arr[i];
        c = 0;
        for (j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            primeCount++;
        }
        else
        {
            notPrimeCount++;
        }
    }
    printf("\ntotal prime Count : %d", primeCount);
    printf("\ntotal not prime Count : %d", notPrimeCount);
}