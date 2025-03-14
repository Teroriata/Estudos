#include <stdio.h>

int main(){

    int numero;
    int resultado = 1;

    printf("Digite o numero natural que deseja fatorar\n");

    scanf("%d",&numero);

    while (numero > 1){
       
       resultado =  resultado * numero;
       numero--;
    }
    
    printf("O resulado da fatoracao do numero natural: %d\n", resultado);

        return 0;
}