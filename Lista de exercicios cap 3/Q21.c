#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    char letra_secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("=== JOGO DE ADIVINHACAO DA LETRA ===\n");
    printf("Tente adivinhar a letra secreta entre 'a' e 'z'.\n\n");

    while (1)
    {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite);

        tentativas++;

        if (palpite == letra_secreta) 
        {
            printf("\nParabens! Voce acertou a letra '%c'!\n", letra_secreta);
            printf("Total de tentativas: %d\n", tentativas);
            break;
        } 
        else if (palpite < letra_secreta)
        {
            printf("A letra secreta vem depois no alfabeto.\n\n");
        } 
        else
        {
            printf("A letra secreta vem antes no alfabeto.\n\n");
        }
    }
}