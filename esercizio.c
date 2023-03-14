#include <stdio.h>

int main()

{
    char sesso;
    printf("ciao utente inserisci il tuo sesso: M = maschio, F = femmina, N = non identificato\n");
    scanf("%c", &sesso);

    if (sesso == 'M')
    { 
        printf("sei maschio\n");
    }
    else if (sesso == 'F')
    {
        printf("sei una femmina\n");
    }
    else if (sesso == 'N')
    {
        printf("il tuo sesso è non identificato\n");
    }
    else 
    {
        printf("scrittura non corretta: M = maschio, F = femmina, N = non identificato\n");
    }
}