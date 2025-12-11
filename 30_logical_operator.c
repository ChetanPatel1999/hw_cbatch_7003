#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 15 == 15 && 55 > 9;
    // res = 12 > 77 || 15 > 15 || 55 == 9;
    // res = !(12 > 6);
    res = !(12 > 7 && 7 == 9);
    printf("res = %d\n", res);
}