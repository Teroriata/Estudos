#include <stdio.h>

int main(){

    int vetor[5] = {5,7};

    for(int i = 2; i < 5; i++){
        
        vetor[i] = 10 * (i+1);
    }

    for(int i = 0; i < 5; i++){
        
        printf("%i\n", vetor[i]);
    }   

    printf("\n");
    
    int notas[100] = {0};

    for(int i = 0; i < 100; i++){
        
        printf("%i\n", notas[i]);
    }
}


