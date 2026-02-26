// how to take string from user
#include <stdio.h>
void main()
{
    char name[33];
    printf("enter string : ");
    // scanf("%s", name);
    scanf("%[^\n]s", name);
    printf("name = %s\n", name);
}