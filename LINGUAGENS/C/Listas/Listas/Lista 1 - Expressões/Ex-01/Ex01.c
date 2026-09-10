#include <stdio.h>

int main (){

    float salario, consumo;
    float kw;
  
    scanf("%f",&salario);
    scanf("%f",&consumo);

    kw = (1 * (0.7 * salario))/100;

    printf("Custo por kw: R$ %.2f\n",kw);
    printf("Custo do consumo: R$ %.2f\n", kw*consumo);
    printf("Custo com desconto: R$ %.2f\n", (kw*consumo) *0.9);

    return 0;
}