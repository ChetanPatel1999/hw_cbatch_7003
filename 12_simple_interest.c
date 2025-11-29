// Write a program to calculate simple interest.
#include <stdio.h>
void main()
{
    float principle, rate, time, si, total_amount;
    printf("enter principle :");
    scanf("%f", &principle);
    printf("enter rate :");
    scanf("%f", &rate);
    printf("enter time :");
    scanf("%f", &time);
    si = (principle * rate * time) / 100;
    printf("simple interest = %.2f\n", si);
    total_amount = principle + si;
    printf("total amount = %.2f", total_amount);
}