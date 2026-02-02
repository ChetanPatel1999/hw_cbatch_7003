#include <stdio.h>
void addition(); // function declaration
void main()
{
    printf("start main function ....\n");
    addition(); // function calling
    printf("inside main function ...\n");
    addition();
    printf("end main function...");
}
void addition() // function defination
{
    int a, b, c;
    printf("this is addition function\n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
