// recusrion :- when a function call itself is called recursion.
//its run infinite time
#include <stdio.h>
void fun()
{
    printf("hello students\n");
    fun();
}
void main()
{
    fun();
}