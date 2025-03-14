#include <stdio.h>

int main(){
     
    int base;
    int altura;
    int area;

    printf("Digite o valor da bases:");
    scanf("%i", &base);

    printf("Digite o alor da altura");
    scanf("%i", &altura);

    area = altura * base;

    printf("O vaor da area do retangulo e: %i\n",area);

    return 0;
}