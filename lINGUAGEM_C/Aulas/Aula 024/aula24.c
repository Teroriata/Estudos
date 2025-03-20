#include <stdio.h>

int main(){

    float notas [5] = {0};
    float media, total = 0;

    printf("INSIRA 5 NOTAS:\n");

    for (int i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0; i < 5; i++){
        total += notas[i];
    }

    media = total / 5;

    printf("A MEDIA DAS 5 NOTAS: %.2f\n", media);


    return 0;

}