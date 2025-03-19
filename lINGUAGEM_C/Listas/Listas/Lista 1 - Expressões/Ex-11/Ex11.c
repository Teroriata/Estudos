#include <stdio.h>

int main(){

    float n1, n2, n3, total;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    total = n1 * (1+((n2+n3)/100));

    printf("O VALOR DO CARRO E = %.2f",total);


}