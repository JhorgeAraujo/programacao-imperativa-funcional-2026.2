#include <stdio.h>

int main() {

    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /*
        Cada caractere possui um valor numerico associado
        na tabela ASCII. Ao imprimir o char com %d,
        mostramos esse valor inteiro correspondente.
    */

    printf("O valor inteiro correspondente e: %d\n", caractere);

}