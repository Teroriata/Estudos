#include <stdio.h>

int main(){
    int numero, controle, resultado = 0, vet[3];

    scanf("%i",&numero);

    for(int i = 2; i >= 0; i--){

        vet[i] = numero % 10;
        numero /= 10;

    }

    controle = ((vet[0] + (3*vet[1]) + (vet[2]*5)) % 7);
    resultado = (vet[0]*1000) + (vet[1]*100) + (vet[2]*10) + controle ;

    printf("O NOVO NUMERO E = %i\n", resultado);

    return 0;
}