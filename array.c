#include <stdio.h> 

int main()
{
    int i;
    int a = 2;
    int z = 0;
    int divisore = 2;
    
    printf("scrivere numero \n");
    scanf("%d", &i);
    int array[i];

    
    while (z<i)
    {
        while (a % divisore != 0 && divisore < a)   
        {    
            divisore++;
        }
        if (divisore == a)
        {
            array[z] = a;
            z++;
        }
        a++;     
        divisore = 2;
    }    
    z =0;
    while (z<i)
    {
        printf("%d\n", array[z]);
        z++;
    }        
}