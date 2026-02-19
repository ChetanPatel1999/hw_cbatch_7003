// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0];
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = &arr[0]; // arr
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr);
        ptr++;
    }
}