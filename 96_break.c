// wap to search a number in given table.
#include <stdio.h>
void main()
{
    int tab;
    int num, i, chotu = 0;
    printf("enter a table num : ");
    scanf("%d", &tab); // 8
    printf("enter search num : ");
    scanf("%d", &num); //16
    for (i = 1; i <= 10; i++)
    {
        if (num == tab * i)
        {
            chotu = 1;
            break;
        }
    }
    if (chotu == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}