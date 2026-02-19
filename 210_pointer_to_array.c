// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr, i;
    ptr = &arr[0];
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr);
        ptr++; //404
    }
}