#include <stdio.h>

int main()
{
    int n; 
    int z = 0;
    int a;
    int max;
    
    printf("inserire numero di elementi dell'array\n");
    scanf("%d", &n);
    int array[n]; 
    
    while (z<n)
    {
        printf("ïnserire un numero\n");
        scanf("%d", &a);
        array[z] = a; 
        z++; 
    }
    z=0;
    max = array[0];
    a = array[0];
    while (z<n)
    {
        if (array[z] > max)
        {
            max = array[z];       
        }
        else if (array [z] < a)
        {
            a = array[z];
        }
        z++;
    }
    printf("il numero piu grande è %d e il piu piccolo è %d\n", max, a);
}