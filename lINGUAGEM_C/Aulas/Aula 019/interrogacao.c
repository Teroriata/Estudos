#include <stdio.h>

int main(){

    int num1 = 10;
    int num2 = 20;

    int resposta = 1;

    printf("Num1 = %i\n",num1);
    printf("Num2 = %i\n",num2);
    printf("Resposta = %i\n",resposta);
    printf("\n");

    printf("Num1 e maior que Num2\n");
    num1 < num2 ? printf("Sim\n") : printf("Nao\n");

    printf("\n");

    printf("Num1 e menor que Num2\n");
    num1 > num2 ? printf("Sim\n") : printf("Nao\n");

    printf("\n");

    printf("Altera o Valor de resposta com base em uma condicional ""num1 < num2 ?""\n");
    resposta = (num1 > num2) ? 10 : -10;


    printf("Resultado = %i\n", resposta);

    return 0;
}