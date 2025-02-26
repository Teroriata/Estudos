#include <stdio.h>

int main(){
    int myAge = 23, motherAge = 51, fatherAge = 53;
    int brotherAge = 15;

    int totalAge;

    totalAge = myAge + motherAge + fatherAge +  brotherAge;

    int differenceAge = myAge - brotherAge;

    printf("my age: %i, mother age: %i, fatther age: %i.\n",myAge,motherAge,fatherAge);
    printf("total age: %i\n", totalAge);
    printf("difference age bother: %i\n", differenceAge);
    
    int multiplicação;

    multiplicação = 5 * 4;

    printf("resultado da multiplicacao: %i\n", multiplicação);
    return 0;
}