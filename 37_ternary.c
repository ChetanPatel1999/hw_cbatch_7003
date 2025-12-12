// Write a program to accept a number from user and print if it is divisible by 5 .
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    num % 5 == 0 ? printf("num is divisible by 5") : printf("num is not divisible by 5");
}