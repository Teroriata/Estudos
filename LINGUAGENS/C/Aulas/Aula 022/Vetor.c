#include <stdio.h>

int main() {
    float nota[5];
    int i = 0;  // Agora i é int

    // Lendo 5 notas
    while (i < 5) {
        scanf("%f", &nota[i]);
        i++;
    }

    // Exibindo as notas
    for (int i = 0; i < 5; i++) {
        printf("Nota %d = %.2f\n", i + 1, nota[i]); // %.2f para 2 casas decimais
    }

    return 0;
}
