// Write a for a Club Entry System with Menu and Billing.
// The program should:
// 1.Ask the user for their age. If the age is less than 18, display a message
// "Entry not allowed" and exit. Otherwise, allow entry.
// 2. Display a menu with at least 3 items and their prices.
// 3.Allow the user to order items repeatedly until they press 1 to stop
// ordering.
// 4. Keep a running total of the bill.
// 5.At the end, display the total bill amount.
#include <stdio.h>
void main()
{
    int age, order, p, c1 = 0, c2 = 0, c3 = 0, totalBill = 0, q;
    printf("enter your age : ");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("welcome to club ! \n");
        do
        {
            printf("club menu : \n");
            printf("1. pasta : 169\n");
            printf("2. sandwitch  : 150\n");
            printf("3. burger  : 100\n");
            printf("select order : ");
            scanf("%d", &order);
            switch (order)
            {
            case 1:
                c1++;
                printf("your pasta is orderd count = %d \n", c1);
                totalBill = totalBill + 169;
                break;
            case 2:
                printf("enter quantity : ");
                scanf("%d", &q); // 2
                c2 = c2 + q;     // 5
                printf("your sandwitch is orderd count = %d \n", c2);
                totalBill = totalBill + 150 * q;
                break;
            case 3:
                c3++;
                printf("your burger is orderdcount = %d \n", c3);
                totalBill = totalBill + 100;
                break;
            default:
                printf("please enter 1 to 3 number\n");
            }
            printf("total orderd :\n");
            if (c1 != 0)
            {
                printf("pasta : %d\n", c1);
            }
            if (c2 != 0)
            {
                printf("sandwitch : %d\n", c2);
            }
            if (c3 != 0)
            {
                printf("burger : %d\n", c3);
            }
            printf("you want order something else so press 1 otherwise 0 :");
            scanf("%d", &p);
        } while (p == 1);

        printf("\n\n<-------------- sir/mem your Total bill-------------------->\n");
        printf(" item          quantity      price         total \n");
        printf(" pasta          %d           169            %d \n", c1, c1 * 169);
        printf(" sandwitch      %d           150            %d \n", c2, c2 * 150);
        printf(" burger         %d           100            %d \n", c3, c3 * 100);
        printf("-----------------------------------------------------------\n");
        printf("                 Total Bill : %d \n", totalBill);
        printf("-----------------------------------------------------------\n");
        printf("             thank you for visiting %c\n", 1);
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}