#include <stdio.h>
void fun3();
void fun1()
{
    fun3();
    printf("hi i am fun1 \n");
}
void fun2()
{
    printf("hi i am fun2 \n");
}
void fun3()
{
    printf("hi i am fun3 \n");
    fun2();
}
void main()
{
    printf("main fun is start...\n");
    fun1();
    fun3();
    printf("main fun is end");
}