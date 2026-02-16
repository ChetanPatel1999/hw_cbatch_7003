// print matrix element address
#include <stdio.h>
void main()
{
    int mat[3][2] = {{12, 34}, {22, 33}, {67, 89}};
    int i, j;
    printf("matrix elementare : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}