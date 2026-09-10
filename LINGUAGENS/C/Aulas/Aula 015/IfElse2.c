#include <stdio.h>

int main(){

    int idade;

    do{
    printf("Favor informar idade:\nDigite ""0"" para finalizar\n");
    scanf("%d",&idade);

    if( idade <= 5){
        printf("bebe!\n");
    }
    else if (idade > 5 && idade <=10){
         printf("Crianca!\n");
    }
    else if( idade >10 && idade <=18){
        printf("Adolescente!\n");
    }
    else if(idade > 18 && idade < 65){
        printf("Adulto!\n");
    } else printf("Idoso!\n");

    printf("\n");

    }while( idade > 0);
    
}