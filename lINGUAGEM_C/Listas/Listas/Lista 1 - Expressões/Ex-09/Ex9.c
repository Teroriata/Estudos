#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    // Lendo o número real
    scanf("%lf", &numero);

    // Arredondando para 1, 2 e 3 casas decimais
    double arred1 = round(numero * 10) / 10.0;
    double arred2 = round(numero * 100) / 100.0;
    double arred3 = round(numero * 1000) / 1000.0;

    // Exibindo com exatamente 6 casas decimais
    printf("%.6f\n", arred1);
    printf("%.6f\n", arred2);
    printf("%.6f\n", arred3);

    return 0;
}
