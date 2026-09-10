#include <stdio.h>
#include <math.h>

int main(){

    float altura, aresta;
    float areaB, volume;

    scanf("%f", &altura);
    scanf("%f", &aresta);

    

    areaB = (3*(aresta*aresta)*sqrt(3))/2;

    volume = (areaB*altura) / 3;

    printf("O VOLUME DA PIRAMIDE e = %.2f METROS CUBICOS", volume);
}