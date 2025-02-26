#include <stdio.h>

int main(){

    int contador;
    int numero = 2;
    int x = 1;

    for(contador = 1; contador != numero;x++){
        
        printf("numero: %i\n",x);

        if(x==10)contador =2;

    }
}