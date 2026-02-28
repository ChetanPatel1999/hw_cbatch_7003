// strcmp() :- its compare two string same or differenet
//its return 0 if string are same or return 1 if string are different

//strcmpi() :-  its ignore case sensitive .
#include <stdio.h>
void main()
{
    char s1[] = "hello";
    char s2[] = "Hello";

    if (strcmpi(s1, s2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}