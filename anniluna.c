#include <stdio.h> 

int main()
{
    int anno;
    printf("scrivi il tuo anno di nascita\n");
    scanf("%d", &anno);

    if (anno > 1969)
    { 
        printf("sei nato %d anni dopo lo sbarco sulla luna\n", anno - 1969);
    }

    else if (anno < 1969)
    {
        printf("sei nato %d anni prima lo sbarco sulla luna\n", 1969 - anno);
    }

    else 
    {
        printf("sei nato quando è stato compiuto un piccolo passo per l'uomo e un grande passo per l'umanità!\n");
    }
}