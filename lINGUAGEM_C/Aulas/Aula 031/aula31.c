#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2;
    static int variavelLocalEstatica = 2; //static, cria uma variavel que se mantem ao decorrer do codigo.

    variavelLocalAutomatica *=2;
    variavelLocalEstatica *= 2;

    printf("Variavel local Automatica: %i\n", variavelLocalAutomatica);
    printf("Variavel local Estatica: %i\n", variavelLocalEstatica);

}

int main(){

    teste(); // vai dar 4
    printf("\n");
    teste(); // vai dar 4
    printf("\n");
    teste(); // vai dar 4

    return 0;
}