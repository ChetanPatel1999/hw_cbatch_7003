// Write a program using switch-case to print your friend's name based on the 
// first letter of their name.
#include<stdio.h>
void main()
{
   char first_later;
   printf("enter frist later of your friend name : ");
   scanf("%c",&first_later);
   switch (first_later)
   {
   case 'r':printf("rupesh chaturvedi");break;
   case 'h':printf("harry paji");break;
   case 'd':printf("dev sahu");break;
   case 'k':printf("khushi anjana");break;
   case 'K':printf("Kuldeep solnki");break;
   default : printf("no one name start with %c",first_later);
   }
}