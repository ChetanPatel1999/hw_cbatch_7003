//. Write a program to find and display only main diagonal element of a matrix.
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

    if (r == c)
    {
        // printf("\nmatrix oposite digonal element are : \n");
        // for (i = 0; i < r; i++) // 2
        // {
        //     printf("%d ", mat[i][r - 1 - i]);
        // }

        printf("\nmatrix oposite digonal element are : \n");
        for (i = 0; i < r; i++) // 2
        {
            for (j = 0; j < c; j++) // 3
            {
                if (i + j == r - 1)
                {
                    printf("%d ", mat[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("your matrix is not square matrix");
    }
}