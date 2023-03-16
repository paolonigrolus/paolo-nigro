#include <stdio.h>

int potenza (int base, int esponente)
{
    int tot = 1;
    int a = 0;
    while (a < esponente)
    {
        tot *= base;
        a++;
    }
   
return(tot);
}


int main()
{
    int x;
    int y;
    int tot;
    printf("scrivere base ed esponente \n");
    scanf("%d %d", &x, &y);

    tot = potenza(x, y);
    printf("%d\n", tot);
}
