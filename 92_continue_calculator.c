#include <stdio.h>
void main()
{
    int p;
    int choise, a, b, c;
    do
    {
        printf("<----- welcome to my calculator ----->\n");
        printf("       press 1 to addition : \n");
        printf("       press 2 to subtraction : \n");
        printf("       press 3 to multiplication : \n");
        printf("       press 4 to division : \n");
        printf("       choose any opetion  : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("this is addition app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a + b;
            printf("addition : %d\n", c);
            break;
        case 2:
            printf("this is subtraction app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a - b;
            printf("subtraction : %d\n", c);
            break;
        case 3:
            printf("this is multiplication app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a * b;
            printf("multiplication : %d\n", c);
            break;
        case 4:
            printf("this is division app : \n");
            printf("enter first num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a / b;
            printf("division : %d\n", c);
            break;
        default:
            printf("wrong choise ! please enter 1 to 4");
        }

        printf("enter 1 to continue calculator 0 to exit : ");
        scanf("%d", &p);
    } while (p == 1);
    printf("thanks to visit my calculator %c", 1);
}