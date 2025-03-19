#include <stdio.h>

int main(){

    int delta, A, B, C;

    scanf("%i",&A);
    scanf("%i",&B);
    scanf("%i",&C);

    delta = (B*B)-(4*A*C);

    printf("O VALOR DE DELTA E = %i\n", delta);
    
    return 0;
}