// print matrix element address
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element  : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // sum of all matrix element
    int sum = 0;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            sum = sum + mat[i][j];
        }
    }
    printf("\nsum of all element = %d", sum);
    printf("\naverage of all element = %0.2f", sum / (float)(r * c));
}