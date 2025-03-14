#include <stdio.h>

int main (){

    int number1, number2;

    printf("Digite o primeiro numero inteiro!\n");
    scanf("%i", &number1);

    printf("Digite o segundo numero inteiro!\n");
    scanf("%i", &number2);

    if (number1%number2 == 0){
        printf("O %i e divisivel por %i\n",number1, number2);
    } else printf("Numero %i nao divisivel por %i\n",number1, number2);
}