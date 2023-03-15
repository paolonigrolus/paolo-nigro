#include <stdio.h>

int main()
{
    int x;
    int y = 2;
    int risultato = 0;
    printf("scrivi un numero primo\n");
    scanf("%d", &x);

    while (y < x)
    {   
        
        if (x % y != 0)
            risultato = 1;
        else
            break;
        y = y + 1;
    }
    if (risultato != 1)
        printf("è un numero primo\n");
    else 
        printf("non è un numero primo\n");
}