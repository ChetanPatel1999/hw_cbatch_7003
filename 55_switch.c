// 12. Write a program using switch-case to check whether a given number is
// even or odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 0:
        printf("num is odd");
        break;
    case 1:
        printf("num is even");
        break;
    }
}