#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido! Digite um valor positivo.\n");
        return 1;
    }

    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int quantidade[6] = {0};
    int valor_original = valor;

    for (int i = 0; i < 6; i++) {
        while (valor >= cedulas[i]) {
            valor -= cedulas[i];
            quantidade[i]++;
        }
    }

    if (valor != 0) {
        printf("\nNao e possivel fornecer o valor exato de R$ %d com as cedulas disponiveis.\n", valor_original);
        printf("Sobra nao sacada: R$ %d\n", valor);
    } else {
        printf("\nSaque de R$ %d realizado com sucesso:\n", valor_original);
        for (int i = 0; i < 6; i++) {
            printf("Cedulas de R$ %3d: %d\n", cedulas[i], quantidade[i]);
        }
    }

    return 0;
}