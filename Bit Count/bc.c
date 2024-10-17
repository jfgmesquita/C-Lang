#include <stdio.h>
#include <stdlib.h>

int countBits(unsigned long num) {
    int conta = 0;

    while (num) {
        // Incrementa o contador se o bit menos significativo for 1
        if(num & 1) {
            conta++;
        }
        // Desloca o número para a direita para verificar o próximo bit
        num >>= 1;
    }

    return conta;
}

int main(int argc, char *argv[]) {
    unsigned long num = 0;

    if (argc < 2) {
        printf("Uso: %s <número inteiro>\n", argv[0]);
        return 1;
    }

    char *endptr;
    num = strtol(argv[1], &endptr, 16);

    // Verifica se a conversão foi bem-sucedida
    if (endptr && *endptr != '\0') {
        printf("Erro: '%s' não é um número hexadecimal válido.\n", argv[1]);
        return 1; // Retorna um código de erro
    }

    int bitsLigados = countBits(num);
    printf("O número %ld tem %d bits ligados.\n", num, bitsLigados);

    return 0;
}