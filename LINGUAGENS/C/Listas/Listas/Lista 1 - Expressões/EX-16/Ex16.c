#include <stdio.h>

int main(){

    int numero,resultado, vet[3];
    scanf("%i",&numero);

    for(int i = 3; i > 0; i--){
        vet[i-1] = numero % 10;
        numero /= 10;
    }

    resultado = (vet[2]*100) + (vet[1]*10)+vet[0];

    printf("%i\n",resultado);

    return 0;
}