#include <stdio.h>

int main(){
    long int soma_quadrados = 0;

    for (int i = 1; i <= 100; i++)
    {
        int quadrado = i * i;
        printf("%3d -> %5d\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\nSoma total dos quadrados: %ld\n", soma_quadrados);

}