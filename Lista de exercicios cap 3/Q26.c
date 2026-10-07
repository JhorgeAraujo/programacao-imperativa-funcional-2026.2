#include <stdio.h>

int main() {
    int A, B;
    long long soma_primos = 0;
    int encontrou = 0;

    printf("Digite o valor de A (positivo): ");
    scanf("%d", &A);
    printf("Digite o valor de B (positivo e maior que A): ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) 
    {
        printf("Entrada invalida! Certifique-se de que A e B sao positivos e que A < B.\n");
        return 1;
    }

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (int num = A; num <= B; num++)
    {
        if (num < 2)
        {
            continue;
        }

        int eh_primo = 1;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0) 
            {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) 
        {
            printf("%d ", num);
            soma_primos += num;
            encontrou = 1;
        }
    }

    if (!encontrou) 
    {
        printf("Nenhum numero primo encontrado no intervalo.");
    }

    printf("\n\nSoma total dos primos encontrados: %lld\n", soma_primos);
}