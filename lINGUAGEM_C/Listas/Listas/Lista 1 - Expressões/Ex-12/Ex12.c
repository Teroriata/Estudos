#include <stdio.h>

int main() {
    double massa, aceleracao, tempo;

    // Entrada de dados
    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    // Cálculo correto
    double velocidade, espaco, w;

    velocidade = aceleracao * tempo;  // Em m/s
    espaco = (aceleracao * (tempo * tempo)) / 2; // S = (a * t^2) / 2
    w = ((massa * 1000) * (velocidade * velocidade)) / 2; // Trabalho

    // Convertendo velocidade para km/h
    velocidade *= 3.6;

    // Saída formatada
    printf("VELOCIDADE = %.2f km/h\n", velocidade);
    printf("ESPACO PERCORRIDO = %.2f m\n", espaco);
    printf("TRABALHO REALIZADO = %.2f J\n", w);

    return 0;
}
