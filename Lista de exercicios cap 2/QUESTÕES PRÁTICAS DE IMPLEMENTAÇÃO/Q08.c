#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;
    float decima_parte = (float)numero / 10;

    printf ("(8.a): quadrado: %d\n", quadrado);
    printf ("(8.b): decima parte: %.2f", decima_parte);

}