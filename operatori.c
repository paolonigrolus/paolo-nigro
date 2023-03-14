#include <stdio.h>
int main()

{
    int eta;

    printf("ciao utente quanti anni hai?\n");
    scanf("%d", &eta);
    if (eta < 18)
    {
        printf("sei minorenne\n");
    }
    else
    {
        printf("sei maggiorenne\n");
    }




}