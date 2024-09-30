#include <stdio.h>
#define alturaMaxima 225 //define uma constante.

//typedef dar nome a uma estrutura.
//Typedef int chave; define um novo nome para int, no caaso do exemplo chave

typedef struct{
    float peso;
    float altura;
    float imc;
} PesoAltura;

int main(){

    PesoAltura mateus;
    mateus.peso = 115;
    mateus.altura = 1.68;

    mateus.imc = mateus.peso / (mateus.altura*mateus.altura);

    printf("ALtura = %.2f, Peso = %.2f, imc = %.2f\n", mateus.altura, mateus.peso, mateus.imc);
    return 0;
}