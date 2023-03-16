#include <stdio.h>

int main()
{

    char stringa[] = "";
    char stringa2[] = "";
    printf("scrivi una parola\n");
    scanf(" %s %s", stringa, stringa2);
    int i = 0; 
    int a = 0;
    
   while (stringa[i]!= '\0' )
    {
        i++;
    }
    i= i-1;
    
    while (a<=i) 
    {
        stringa2 [a] = stringa [i];
        a++;
        i--;
    }
    printf("%s\n", stringa2);
    
}