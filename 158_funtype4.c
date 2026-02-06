// with return type but not parameter
#include <stdio.h>
int addition()
{
    int a, b, c;
    printf("this is addition app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    return c;
}
void main()
{
    int res = addition();
    printf("addition = %d\n", res);
    printf("addition : %d", addition());
}