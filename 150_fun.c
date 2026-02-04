//  Write a program to make simple calculator.
//       Press 1 to addition
//       Press 2 to subtraction
//       Press 3 to multiplication
//       Press 4 to division
#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void subtraction()
{
    int a, b, c;
    printf("this is subtraction app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction : %d\n", c);
}
void multiplication()
{
    int a, b, c;
    printf("this is multiplication app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication : %d\n", c);
}
void division()
{
    int a, b, c;
    printf("this is division app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a / b;
    printf("division : %d\n", c);
}
void main()
{
    int choise, a, b, c;
    printf("<----- welcome to my calculator ----->\n");
    printf("       press 1 to addition : \n");
    printf("       press 2 to subtraction : \n");
    printf("       press 3 to multiplication : \n");
    printf("       press 4 to division : \n");
    printf("       choose any option  : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    default:
        printf("wrong choise ! please enter 1 to 4");
    }
}