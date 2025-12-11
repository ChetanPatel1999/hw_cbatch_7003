#include <stdio.h>
void main()
{
    // 0 ? printf("hello") : printf("by");
    // 1 ? printf("hello") : printf("by");
    // 12 > 66 ? printf("hello") : printf("by");
    12 % 4 == 0 ? printf("hello") : printf("by");
}