#include <stdio.h>

int main() {
    // =================== TIPOS PRIMITIVOS EM C ===================
    // Em C, os tipos primitivos são os tipos básicos de dados usados para armazenar valores na memória.

    // ===== TIPOS INTEIROS =====
    // Armazenam números inteiros (positivos e negativos), sem casas decimais.

    // int: Número inteiro padrão (normalmente 4 bytes, 32 bits)
    int numero = -10; // Pode armazenar valores de -2.147.483.648 a 2.147.483.647

    // unsigned int: Apenas valores positivos (normalmente 4 bytes)
    unsigned int numeroPositivo = 100; // Intervalo: 0 a 4.294.967.295

    // short int: Número inteiro menor, ocupa menos espaço (normalmente 2 bytes, 16 bits)
    short int pequenoNumero = 32000; // Intervalo: -32.768 a 32.767

    // long int: Inteiro maior que o padrão (4 ou 8 bytes, dependendo do sistema)
    long int numeroGrande = 2147483647; // Intervalo: Depende do sistema

    // long long int: Maior tipo inteiro disponível (normalmente 8 bytes, 64 bits)
    long long int numeroMuitoGrande = 9223372036854775807LL; // Intervalo: -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807

    // ===== TIPOS DE PONTO FLUTUANTE =====
    // Armazenam números com casas decimais.

    // float: Número de ponto flutuante com precisão simples (normalmente 4 bytes)
    float decimalPequeno = 3.1415f; // Aproximadamente 6-7 casas decimais de precisão

    // double: Número de ponto flutuante com precisão dupla (normalmente 8 bytes)
    double decimalGrande = 3.141592653589793; // Aproximadamente 15-16 casas decimais de precisão

    // long double: Número de ponto flutuante com precisão estendida (normalmente 10, 12 ou 16 bytes)
    long double decimalMuitoGrande = 3.14159265358979323846L; // Depende da arquitetura

    // ===== TIPO CARACTERE =====
    // Usado para armazenar um único caractere ou pequenos números inteiros.

    // char: Tipo usado para armazenar caracteres (normalmente 1 byte, 8 bits)
    char letra = 'A'; // Pode armazenar valores de -128 a 127 (signed) ou 0 a 255 (unsigned)

    // ===== TIPO BOOLEANO (em C99 e superior) =====
    // C não possui um tipo booleano nativo antes do C99, mas podemos usar a biblioteca <stdbool.h>
    #include <stdbool.h>
    bool verdadeiro = true;  // true (1)
    bool falso = false;      // false (0)

    // ===== IMPRESSÃO DOS VALORES =====
    printf("Inteiro padrão: %d\n", numero);
    printf("Inteiro sem sinal (unsigned): %u\n", numeroPositivo);
    printf("Short int: %hd\n", pequenoNumero);
    printf("Long int: %ld\n", numeroGrande);
    printf("Long long int: %lld\n", numeroMuitoGrande);
    printf("\n");
    printf("Float: %.7f\n", decimalPequeno);
    printf("Double: %.15f\n", decimalGrande);
    printf("Long double: %.20Lf\n", decimalMuitoGrande);
    printf("\n");
    printf("Caractere: %c\n", letra);
    printf("Booleano verdadeiro: %d\n", verdadeiro);
    printf("Booleano falso: %d\n", falso);
    printf("\n");
    printf("Todos os tipos de variaveis em C podem usar const, incluindo inteiros, ponto flutuante, caracteres, ponteiros, arrays e ate estruturas (structs). A palavra-chave const impede que o valor da variavel seja alterado apos a inicializacao.\n");
    return 0;
}
