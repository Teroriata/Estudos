#include <stdio.h>

int main(){
    int intVar = 9999999;
    int intVa2 = 10;
    double doubleVar = 100.123456789;

    //formatacao variaveis inteiras
    printf("VARIAVEL INTEIRA (%%d) - DECIMAL = %d\n", intVar);
    printf("VARIAVEL INTEIRA (%%i) - INTEIRO = %i\n", intVar);
    printf("VARIAVEL INTEIRA (%%x) - HEXADECIMAL = %x\n", intVar);
    printf("VARIAVEL INTEIRA (%%o) - OCTAL = %o\n", intVar);
    printf("\n");

    printf("VARIAVEL INTEIRA (%%d) - DECIMAL = %7d\n", intVa2);// formata a posição do numero do printf f
    printf("VARIAVEL INTEIRA (%%i) - INTEIRO = %i\n", intVar);
    printf("VARIAVEL INTEIRA (%%x) - HEXADECIMAL = %x\n", intVar);
    printf("VARIAVEL INTEIRA (%%o) - OCTAL = %o\n", intVar);
    printf("\n");

    printf("VARIAVEL DOUBLE (%%f) - PRECISAO MAXIMA DO FLOAT, 7 CASAS = %f\n", doubleVar);
    printf("VARIAVEL DOUBLE (%%f) - TRUNCAR UM NUMERO USANDO %%.2F = %.2f\n", doubleVar);// TRUNCAR UM NUMERO PARA LIMITAR AS CASAS DECIMAIS.
    printf("VARIAVEL DOUBLE (%%e) - NOTACAO CIENTIFICA = %e\n", doubleVar);
    printf("VARIAVEL DOUBLE (%%g) - PRECISAO DE 3 CASAS = %g\n", doubleVar);
    printf("VARIAVEL DOUBLE (%%a) - NOTACAO CIENTIFICA USANDO VIRGULA = %a\n", doubleVar);

}