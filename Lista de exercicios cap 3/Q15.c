#include <stdio.h>

int main(){

    int NUM;
    int encontros = 0;
    
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &NUM);

    if(NUM < 1)
    {
        printf("O numero deve ser maior ou igual a 1");
    }

    printf("Os numeros multiplos de 3 e 5 entre 1 e %d\n", NUM);
    for (int i = 1 ; i <= NUM ; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n", i);
            encontros = 1;
        }
    }

    if (encontros == 0)
    {
        printf("Nenhum numero no intervalo de 1 a %d e multiplo de 3 e 5 ao mesmo tempo.\n", NUM);
    }
}