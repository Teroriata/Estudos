#include <stdio.h>

int main(){

        int saldo, cem, cinquenta, dez, und, aux;

        scanf("%i",&saldo);

        cem = saldo / 100;
        cinquenta = (saldo%100) / 50;
        dez = ((saldo%100) - (cinquenta * 50)) / 10;
        und = ((saldo%100) - (cinquenta * 50)) - ( dez * 10);

        printf("NOTAS DE 100 = %i\n", cem);
        printf("NOTAS DE 50 = %i\n", cinquenta);
        printf("NOTAS DE 10 = %i\n", dez);
        printf("MOEDAS DE 1 = %i\n", und);
 }
