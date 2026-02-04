// no return type , but with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition : %d\n", c);
}
void cube(int num)
{
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("greatest num= %d\n", a);
    }
    else
    {
        printf("greatest num= %d\n", b);
    }
}
void factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        factorial(i);
    }
}
void main()
{
    range(1, 5);
    printf("--------------------\n");
    range(6, 9);

    printf("--------------------\n");
    range(12, 13);

    // int r, s;
    // r = 70;
    // s = 100;
    // addition(r, s);
    // addition(12, 8);
    // addition(4, 7);
    // cube(4);
    // greatestNum(67, 23);
    // greatestNum(67, 345);
    // factorial(5);
    // factorial(6);
}