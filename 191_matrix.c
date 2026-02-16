//print matrix element address
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {22, 33, 44}, {23, 45, 67}};
    int i, j;
    printf("matrix element addresses are : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }
}