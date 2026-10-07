#include <stdio.h>

int main(){
    int N;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            divisores++;
        }
    }

    printf("Quantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2)
    {
        printf("O numero %d e PRIMO.\n", N);
    } 
    else
    {
        printf("O numero %d NAO e primo.\n", N);
    }
}