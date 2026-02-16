// print matrix element address
#include <stdio.h>
void main()
{
    int mat[2][3] = {{12, 34, 56}, {22, 33, 29}};
    int i, j;
    printf("matrix elementare : \n");
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}