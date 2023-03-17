#include <stdio.h> 

int confrontastringa (char  stringa1[], char stringa2[])
{
    int t = 0;    while (stringa1[t] != '\0')
    {
        if(stringa1[t] != stringa2[t])
        {
            return(0);
        }
    t++;
    }
    return(1);
}

int main()
{
    char stringa [] = " ";
    int mese;
    while (!confrontastringa(stringa, "START"))
    {
        printf("BENVENUTO SU 'MY POCKET GARDEN'\n per iniziare a piantare scrivi: 'START'\n");
        scanf(" %s", stringa);
    }
    printf("In quale mese vuoi cominciare a piantare? (scrivi il numero, es: gennaio = 1)\n");
    scanf("%d", &mese);
    
    if (mese == 1)
    {
        printf("Hai selezionato il mese di gennaio! \nEcco la lista delle migliori colture da piantare in questo mese:\nBasilico, Cavolfiore, Fagioli borlotti, Piselli, Cavoli,Spinaci, Lattuga, Cavolo cinese, Radicchio, Cipolle, Rape, Carote, Asparagi, Patate, Prezzemolo, Timo, Valeriana\n");
    }
    else if (mese == 2)
    {
        printf("Hai selezionato il mese di febbraio!\nEcco la lista delle migliori colture da piantare in questo mese:\nAsparagi, Rape, Carote, Lattuga, Cipolla, Patate, Radicchio, Basilico, Fagioli borlotti, Valeriana, Timo, Prezzemolo\n");
    }
    else if (mese == 3)
    {
        printf("Hai selezionato il mese di marzo!\nEcco la lista delle migliori colture da piantare in questo mese:\nBasilico, Fagioli borlotti, Rape, Mais, Cetrioli, Melanzane, Menta, Peperoni, Zucche, Radicchio, Pomodori, Rape\n");
    }
    else if (mese == 4)
    {
        printf("Hai selezionato il mese di aprile!\nEcco la lista delle migliori colture da piantare in questo mese:\nFagioli borlotti, Meloni, Mais, Cetrioli, Melanzane, Piselli, Peperoni, Patate, Patate dolci, Zucca, Pomodori, Anguria\n");
    }
    else if (mese == 5)
    {
        printf("Hai selezionato il mese di maggio!\nEcco la lista delle migliori colture da piantare in questo mese:\nMeloni, Piselli, Peperoni, Patate,Patate dolci, Zucca, Anguria, Carote, Barbabietola, Basilico, Cavolo, Topinambur, Finocchio, Fave, Fagiolini, Cavolo nero, Coriandolo\n");
    }
    else if (mese == 6)
    {
        printf("Hai selezionato il mese di giugno!\nEcco la lista delle migliori colture da piantare in questo mese:\nBarbabietola, Basilico, Cardo, Carota, Cavolo cappuccio, Cavolfiore, Finocchio, Lattuga, Fagioli borlotti, Fagiolini, Prezzemolo, Radicchio, scarola, sedano\n");
    }
    else if (mese == 7)
    {
        printf("Hai selezionato il mese di luglio!\nEcco la lista delle migliori colture da piantare in questo mese:\nMais, Cetrioli, Melanzane, Piselli, Peperoni, Zucca, Pomodori, Finocchio, Porro, Cipolla, Broccoli, Lattuga, cavolfiore, Radicchio, Cime di rapa, Fragole\n");
    }
    else if (mese == 8)
    {
        printf("Hai selezionato il mese di agosto!\nEcco la lista delle migliori colture da piantare in questo mese:\nAsparagi, Basilico, Bieta, Broccoli, Cavolfiori, Cavolini di Bruxelles, Cetriolo, Cicoria, Cime di rapa, Cipolla, Fagioli, Finocchio, Lattuga, Prezzemolo\n");
    }
    else if (mese == 9)
    {
        printf("Hai selezionato il mese di settembre!\nEcco la lista delle migliori colture da piantare in questo mese:\nLattuga, Cime di rapa, Cipolla, Cavolo, Prezzemolo, Rucola, Scarola, Valeriana, Cicoria, Radicchio, Bieta, Cavolfiore, Piselli\n");
    }
    else if (mese == 10)
    {
        printf("Hai selezionato il mese di ottobre!\nEcco la lista delle migliori colture da piantare in questo mese:\nAglio, Piselli, Rucola, Radicchio, Scalogno, Cime di rapa, Fave, Cavolo verza, Spinaci, Valeriana, Rucola, Ravanello, Prezzemolo, Cicoria\n");
    }
    else if (mese == 11)
    {
        printf("Hai selezionato il mese di novembre!\nEcco la lista delle migliori colture da piantare in questo mese:\nAglio, Ravanelli, Ceci, Radicchio, Cime di rapa, Lenticchie, Fave, Lattuga, Rucola, Spinaci, Valeriana, Piselli\n");
    }
    else if (mese == 12)
    {
        printf("Hai selezionato il mese di dicembre!\nEcco la lista delle migliori colture da piantare in questo mese:\nAglio, Cicoria, Cipolla, Asparagi, Melanzane, Piselli, Lattuga, Ravanelli, Prezzemolo, Rapa, Scalogno, Spinaci, Radicchio\n");
    }
    else 
    {
        printf("Attenzione! scrivi il numero del mese in cui vuoi cominciare a piantare (es: gennaio = 1)\n");
    }
}


