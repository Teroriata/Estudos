#include <stdio.h>
#include <math.h>

int main (){

    int numero, auxNumero, aux = 10,resultado = 0,contador = 0;

    printf("Digite o numero a ser invertido!\n");
    scanf("%i",&numero);

    if(numero > -10 && numero < 10){
        printf("RESULTADO: %i\n",numero);
    } else {
        
        auxNumero = numero;
        while(auxNumero>10 || auxNumero < -10){
            auxNumero = auxNumero/10;
            contador++;
        }

        aux = pow(aux,contador);
    }
   
    do{
        resultado = resultado + ((numero%10)*aux);
        numero = numero/10;
       
        aux = aux /10;
        
    }while(numero > 0 || numero < 0);
    
    printf("RESULTADO : %i\n",resultado);

    return 0;
}