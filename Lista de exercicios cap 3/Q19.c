#include <stdio.h>

int main(){
    int n;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Por favor, digite um numero maior que zero.\n");
        return 1;
    }

    long long a = 1, b = 1, proximo;

    printf("\nSequencia ate o termo %d:\n", n);

    if (n == 1)
    {
        printf("1\n");
        printf("\nO 1-esimo termo e: 1\n");
        return 0;
    }

    printf("1, 1");

    if (n == 2)
    {
        printf("\n\nO 2-esimo termo e: 1\n");
        return 0;
    }

    for (int i = 3; i <= n; i++)
    {
        proximo = a + b;
        printf(", %lld", proximo);
        a = b;
        b = proximo;
    }

    printf("\n\nO %dº termo e: %lld\n", n, b);

}