//. . Write a program to find and display the sum of each row and each column of a matrix.
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

    printf("\nrow colum sum : \n");
    int rsum;
    int csum;
    for (i = 0; i < r; i++) // 2
    {
        rsum = 0;
        csum = 0;
        for (j = 0; j < c; j++) // 3
        {
            rsum = rsum + mat[i][j];
            csum = csum + mat[j][i];
        }
        printf("r%d = %d\n", i + 1, rsum);
        printf("c%d = %d\n", i + 1, csum);
    }
}