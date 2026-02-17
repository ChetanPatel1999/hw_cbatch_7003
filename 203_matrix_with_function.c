// Write a program to add two matrices and display the result.
#include <stdio.h>
void display_mat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void get_mat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
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
    get_mat(r, c, mat1);

    printf("enter matrix2 element  : \n");
    get_mat(r, c, mat2);

    printf("matrix1 element are : \n");
    display_mat(r, c, mat1);

    printf("matrix2 element are : \n");
    display_mat(r, c, mat2);

    // sum of two matrix
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nmatrix3 element are : \n");
    display_mat(r, c, mat3);
}