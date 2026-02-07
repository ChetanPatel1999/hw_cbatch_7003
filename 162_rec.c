// recusrion :- when a function call itself is called recursion.
#include <stdio.h>
int i = 1; // globle variable
void fun()
{
    printf("hello students\n");//5
    i++;//6
    if (i <= 5)
    {
        fun();     
    } 
}
void main()
{
    fun();
}