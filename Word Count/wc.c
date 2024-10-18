#include <stdio.h>

int main(int argc, char *argv[]){
    char ch;
    char ultimo;
    int caracteres, palavras, linhas;
    caracteres = 0;
    palavras = 0;
    linhas = 0;

    while((ch = getchar()) != EOF) {
        caracteres += 1;

        if(ch == '\n') {
            linhas += 1;
        }
        else if((ultimo == ' ' || ultimo == '\n' ) && (ch != ' ' && ch != '\n')) {
            palavras += 1;
        }
        ultimo = ch;
    }

    palavras += 1;

    printf("Numero de linhas: %d\n", linhas);
    printf("Numero de palavras: %d\n", palavras);
    printf("Numero de letras: %d\n", caracteres);
    
    return 0;
}
