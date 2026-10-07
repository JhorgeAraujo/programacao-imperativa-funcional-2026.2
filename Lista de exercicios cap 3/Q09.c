#include <stdio.h>

int main(){
    float valor, soma = 0.0;
    int contador = 0;

    printf("Digite um valor positivo (ou um negativo para encerrar): ");
    scanf("%f", &valor);

    while (valor >= 0) 
    {
        soma += valor;
        contador++;

        printf("Digite um valor positivo (ou um negativo para encerrar): ");
        scanf("%f", &valor);
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Quantidade de valores validos: %d\n", contador);
    printf("Soma total: %.2f\n", soma);

    if (contador > 0) 
    {
        printf("Media: %.2f\n", soma / contador);
    }
    else
    {
        printf("Media: N/A (nenhum valor valido foi digitado)\n");
    }


}