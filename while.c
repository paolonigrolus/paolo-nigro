#include <stdio.h>

int main()
{
    int x = 100;
    int y = 0;
    while (x >= 0)
    {
        
        if (x % 2 == 0)
        {
            y = y + x;
            printf("%d\n", y);
            
        }
        x = x-1;
    }
}