#include <stdio.h>

int main(){

    int a,b,c,d;
    float determinante;

    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);

    determinante = (a*d) -( b*c);
    
    printf("O VALOR DO DETERMINANTE E = %.2f\n", determinante);

    return 0;

}