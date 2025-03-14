#include <stdio.h>

int main(){

    int i;

    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%i",&i);

    switch (i)
    {
    case 1:
        printf("Primeira\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terceira\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta");
        break;
    
    default:
        printf("OPCAO NAO VALIDA\n");
        break;
    }
    return 0;
}