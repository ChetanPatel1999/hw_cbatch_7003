#include <stdio.h>
void addition();
void subtration();

void main()
{
    addition();
    addition();
    addition();
    addition();
    subtration();
}
void addition()
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

void subtration()
{
    int a, b, c;
    printf("this is subtration function\n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtration = %d\n", c);
}
