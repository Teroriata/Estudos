#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2;

    variavelLocalAutomatica *=2;
    printf("%i\n", variavelLocalAutomatica);

}

int main(){

    teste(); // vai dar 4
    teste(); // vai dar 4

    return 0;
}