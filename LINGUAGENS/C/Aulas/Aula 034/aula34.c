#include <stdio.h>


float inverterSinal (float numero){
    return numero *=-1;
}

void modulo (float numero1, float numero2){
    if(numero1 < 0 || numero2 < 0){
        if(numero1 < 0) numero1 = inverterSinal(numero1);
        if(numero2 < 0) numero2 =  inverterSinal(numero2);

    } 
     printf(" A SOMA DO MODULO DE N1 + N2 = %.2f\n ", numero1+numero2);
}


int main(){

   
float numero1, numero2;

    scanf("%f", &numero1);
    scanf("%f", &numero2);

     modulo(numero1, numero2);

    return 0;
}