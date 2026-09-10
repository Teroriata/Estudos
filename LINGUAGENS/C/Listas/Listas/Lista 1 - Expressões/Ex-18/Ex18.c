#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double x, y, D;

    // Entrada dos coeficientes
    printf("Digite os coeficientes a, b, c, d, e, f:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    // Calculando o determinante
    D = a * e - b * d;

    if (D != 0) { 
        // Calculando x e y
        x = (c * e - b * f) / D;
        y = (a * f - c * d) / D;

        // Exibindo resultados
        printf("X = %.2f\n", x);
        printf("Y = %.2f\n", y);
    } else {
        // Sistema sem solução única
        printf("O sistema não tem solução única.\n");
    }

    return 0;
}