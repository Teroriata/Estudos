#include <stdio.h>

int main(){

    float ray, height, circleArea, sideArea, area, cost;

    scanf("%f",&ray);
    scanf("%f",&height);

    circleArea = 3.14159 * (ray*ray);
    sideArea = 2*3.14159*ray*height;
    
    area = (2*circleArea) + sideArea;

    cost = area * 100;

    printf("O VALOR DO CUSTO E = %.2f\n",cost);

    return 0;
}