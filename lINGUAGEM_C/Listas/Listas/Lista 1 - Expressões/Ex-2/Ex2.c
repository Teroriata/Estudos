#include <stdio.h>

int main (){
    float  F, C, Polegadas, Milimetros;

    printf("Digie o valor em Fahrenheit a ser convertido\n");
    scanf("%f",&F);

    printf("Digie o valor em Polegadas a ser convertido\n");
    scanf("%f",&Polegadas);

    C = (5*(F-32))/9;
    Milimetros = 25.4 * Polegadas;

    printf("O VALOR EM CELSIUS = %.2f\n",C);
    printf("A QUANTIDADE DE CHUVA E  = %.2f\n",Milimetros);

    return 0;
}