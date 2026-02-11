// how to take array element from user
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
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
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nsum = %d", sum);
    printf("\naverage = %.2f", sum/(float)n);


}