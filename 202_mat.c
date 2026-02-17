// Write a program to add two matrices and display the result.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], mat3[r][c];
    int i, j;
    printf("enter matrix1 element  : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter matrix2 element  : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("matrix1 element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("matrix2 element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // sum of two matrix
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nmatrix3 element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}