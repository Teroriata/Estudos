#include <stdio.h>

float calcularArea( float x, float y){

    float resultado;

    return resultado = x *y;
}

int main(){

    float x, y;

    scanf("%f",&x);
    scanf("%f",&y);

    
    printf("O VALOR DA AREA E: %.2f",calcularArea(x,y) );

    return 0;

}

// int - o que a função retorna
// Main - nome da função
//() - parametos que ela recebe