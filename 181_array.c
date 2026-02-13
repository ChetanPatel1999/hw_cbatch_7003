// . Write a program to count how many elements in an array are divisible by 4.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);//8
    int a[n];
    int i;
    printf("enter array elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 4 == 0)
        {
            count++;
        }
    }

    printf("\ntotal 4 divisible counts = %d", count);

    
}