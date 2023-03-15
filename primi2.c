#include <stdio.h>

int main()
{
    
    int x;
    int y = 2;
    int ok = 0; 
    printf("scrivi un numero\n");
    scanf("%d", &x);

    while (y < x)
    {
        if (x % y == 0)
        {   printf("%d non è un numero primo\n", x);
            ok = 1; 
        
            break;
        }
        y = y + 1;
    }
    if (ok == 0)
        printf("%d è un numero primo\n", x);
    

}