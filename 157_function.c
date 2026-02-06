#include <stdio.h>
int cube(int n)
{
    int c;
    c = n * n * n;
    return c;
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        printf("cube of %d = %d\n", i, cube(i));
    }
}
void main()
{
    range(1, 10);
    printf("----------------\n");
    range(15, 18);
}