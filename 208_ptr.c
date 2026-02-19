// when we increse pointer value by 1 so its increase value
//  by 4 if pointer type is integer
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);
    ptr++;
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
  
}