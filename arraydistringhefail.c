#include <stdio.h>

int main()
{

    char stringamese[12][20];
    
    stringamese[0] = 'gennaio';
    stringamese[1] = "febbraio";
    stringamese[2] = "marzo";
    stringamese[3] = "aprile"
    stringamese[4] = "maggio";
    stringamese[5] = "giugno";
    stringamese[6] = "luglio";
    stringamese[7] = "agosto";
    stringamese[8] = "settembre";
    stringamese[9] = "ottobre";
    stringamese[10] = "novembre";
    stringamese[11] = 'dicembre';
    

    if (mese >= 1 && mese <= 12)
    {
        printf("Hai selezionato il mese di %s", stringamese[mese-1]);
    }
    
    if(confrontastringa(stringamese[0], "gennaio"))
    {
        printf("verdure di gennaio");
    }

    else if(confrontastringa(stringamese[1], "febbraio"))
    {
        printf("verdure di febbraio");
    }
    else if(confrontastringa(stringamese[2], "marzo"))
    {
        printf("verdure di febbraio");
    }
    else if(confrontastringa(stringamese[3], "aprile"))
    {
        printf("verdure di febbraio");
    }
    else if(confrontastringa(stringamese[4], "maggio"))
    {
        printf("verdure di febbraio");
    }
    else if(confrontastringa(stringamese[5], "giugno"))
    {
        printf("verdure di febbraio");
    }
    else if(confrontastringa(stringamese[6], "febbraio"))
    {
        printf("verdure di febbraio");
    }
} 