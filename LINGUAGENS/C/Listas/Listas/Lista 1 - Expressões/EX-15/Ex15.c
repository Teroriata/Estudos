#include <stdio.h>

int main(){
    int numero, aux, resultado = 00000000, multiplicador = 1, contador = 8;

    scanf("%i", &numero);

    while(contador > 0){

        aux = numero % 2;
        numero /= 2;
        if(aux == 1){
            resultado += 1 * multiplicador;
        }  
        multiplicador *= 10;
        contador--;
    }

    if(resultado > 0)printf("%i\n",resultado);
     else printf("00000000\n");


    return 0;
}