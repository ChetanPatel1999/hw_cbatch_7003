// recusrion :- when a function call itself is called recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;           // ist run only once time in program
    printf("hello students\n"); // 3
    i++;                        // 4
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}