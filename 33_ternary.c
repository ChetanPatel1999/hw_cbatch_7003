// wap to check he/she is eligible for voting or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); // 30
    age >= 18 ? printf("you can vote") : printf("you can not vote");
}