#include <stdio.h>
void pattern()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    printf("               My Intro        \n");
    pattern();
    printf("        name = chirag ochani       \n");
    pattern();
    printf("          age = 14      \n");
    pattern();
    printf("          School = SJCS      \n");
    pattern();
}