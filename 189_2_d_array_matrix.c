#include <stdio.h>
void main()
{         //r  c
    int mat[3][3] = {{12, 34, 56}, {22, 33, 44}, {23, 45, 67}};

    printf("matrix element are : \n");
    printf("%d ", mat[0][0]);
    printf("%d ", mat[0][1]);
    printf("%d \n", mat[0][2]);

    printf("%d ", mat[1][0]);
    printf("%d ", mat[1][1]);
    printf("%d \n", mat[1][2]);

    printf("%d ", mat[2][0]);
    printf("%d ", mat[2][1]);
    printf("%d ", mat[2][2]);
}