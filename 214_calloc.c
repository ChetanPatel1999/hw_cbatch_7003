// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    int n;
    printf("enter dynamic array size : ");
    scanf("%d", &n);                     // 5
    ptr = (int *)calloc(n, sizeof(int)); // 400
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp; // ptr=ptr-5;
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", *ptr);
        ptr++; //
    }

    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all array elements : %d", sum);
    ptr = temp;
    free(ptr); // free/delete dynamic memory
}