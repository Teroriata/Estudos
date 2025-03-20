#include <stdio.h>

int main(){
    float  notas[4][4], media[4] = {0};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%f", &notas[i][j]);
            media[i] += notas[i][j];
        }
    }

    for (int i = 0; i < 4; i++){
        printf("MEDIA DO ALUNO %i - %.2f \n", i+1, media[i]/4);
    }
    
}