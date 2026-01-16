#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 30)
    {
        i++;
        if (i % 6 == 0 || i % 4 == 0)
        {
            continue;
        }
        else if (i % 9 == 0)
        {
            break;
        }
        i++;
        printf("%d \n", i);
    }
}
