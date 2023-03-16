#include <stdio.h>

int main()
{
    char stringa [] = "";
    printf("inserisci una stringa; scrivi 'STOP' per terminare\n");
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    while (1)
    {   
        
        scanf(" %s", stringa);
        if (stringa [a] == 'S' && stringa [b] == 'T' && stringa [c] == 'O' && stringa [d] == 'P')
        {
            break;
        }
        else
        {
        printf("%s\n", stringa);
        printf("inserisci una stringa; scrivi STOP per terminare\n");
        }
    }









}