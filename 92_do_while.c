// sallary distribution app
#include <stdio.h>
void main()
{
    int totalAmount = 20000, distributedAmount = 0, sallary, num, con;
    printf("<-------distribute sallary App------->\n");
    printf("---------------------------------------\n");
    printf("          total amount : %d\n", totalAmount);
    printf("---------------------------------------\n");
    do
    {
        printf("    enter sallary : ");
        scanf("%d", &sallary); // 5000
        distributedAmount = distributedAmount + sallary;
        if (distributedAmount <= totalAmount)
        {
            printf("\nammount added succfully\n\n");
        }
        else
        {
            printf("\ninsufficient belance \n");
            distributedAmount = distributedAmount - sallary;
            printf("you have only %d belance\n", totalAmount - distributedAmount);
            printf("and you want to addedd %d amount\n\n", sallary);
            printf("you want to continue press 1 : ");
            scanf("%d", &con);
            if (con != 1)
            {
                break;
            }
        }
        printf("enter 1 for more emp : ");
        scanf("%d", &num);
    } while (num == 1);
    printf("------------------------------------\n");
    printf("total amount distribute : %d\n", distributedAmount);
    printf("reamaing amount  : %d\n", totalAmount - distributedAmount);
}