#include <stdio.h>
void main()
{
    int age;
    printf("enter your age :- ");
    scanf("%d", &age); // 12
    printf("eating food\n");
    printf("playing game\n");
    if (age >= 18)
    {
        printf("drive a car\n");
        printf("give vote\n");
    }
    printf("reading books\n");
}