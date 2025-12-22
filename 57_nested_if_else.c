// Write a program to read the age of a candidate and determine whether he
//  is eligible to cast his/her own vote in india or not.
#include <stdio.h>
void main()
{
    char country;
    printf("enter 'i'  if you are indian : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        int age;
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you can vote in india");
        }
        else
        {
            printf("you can not vote try after %d year", 18 - age);
        }
    }
    else
    {
        printf("you are not indian");
    }
}