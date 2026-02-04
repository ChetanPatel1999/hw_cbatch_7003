//no return type no paramater
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
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d", num, res);
}

void greatestNum()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greatest num= %d", a);
    }
    else
    {
        printf("greatest num= %d", b);
    }
}

void factorial()
{
    int num, i, fact = 1;
    printf("enter a num : ");
    scanf("%d", &num);//5
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d ", num, fact);
}
void main()
{
    // addition();
    // cube();
    // greatestNum();
    factorial();
}