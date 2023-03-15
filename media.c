#include <stdio.h>

int main()
{
    int x;
    int somma = 0;
    int tot = 1;
    int media;
    
    while (1)
    {
        printf("scrivere un numero\n");
        scanf("%d", &x);
        if (x < 0)
            break;
        somma += x; 
        media = somma / tot; 
        tot += 1; 
        printf("la media è %d\n", media);


      
        
        

    }


}