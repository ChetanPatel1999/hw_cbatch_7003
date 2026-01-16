#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 20)
    {
        i++; 
        if (i == 5 || i > 8 && i < 12)
        {
            continue;
        }
        printf("%d \n", i); 
    }
}
//1 5 9 10 11
//2,3,4,6,7,8,12.....21