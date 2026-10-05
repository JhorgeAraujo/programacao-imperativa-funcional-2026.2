#include <stdio.h>

int main()
{
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Valor invalido! Nao existe fatorial de numero negativo.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fatorial = fatorial * i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

}