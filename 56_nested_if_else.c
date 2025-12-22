// club project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("welcome to club ! \n");
        printf("club menu : \n");
        printf("1. pasta : 169\n");
        printf("2. sandwitch  : 150\n");
        printf("3. burger  : 100\n");
        printf("select order : ");
        scanf("%d", &order);
        switch (order)
        {
        case 1:
            printf("your pasta is orderd please pay 169 rs");
            break;
        case 2:
            printf("your sandwitch is orderd please pay 150 rs");
            break;
        case 3:
            printf("your burger is orderd please pay 100 rs");
            break;
        default:
            printf("please enter 1 to 3 number");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}