#include <stdio.h>

int main(){
    int matriz[5][5], cont = 1;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
           matriz[i][j] = cont;
           cont++;
        }  
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
           if(matriz[i][j] < 10) printf("0%i ", matriz[i][j]);
                else printf("%i ", matriz[i][j]);
        }
        printf("\n");    
    }
    


}