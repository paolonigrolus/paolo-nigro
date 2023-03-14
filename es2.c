#include <stdio.h>

int main()
{
    int anno;
    printf("quale anno vuoi analizzare?\n");
    scanf("%d", &anno);

    if ((anno % 4 == 0 && anno % 100 != 0 )|| anno % 400 == 0)
    {
        printf("l'anno È bisestile!\n");
    }
    
    else 
    {
        printf("l'anno NON È bisestile\n");
    }


}