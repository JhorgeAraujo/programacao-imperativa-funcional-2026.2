#include <stdio.h>

int main(){

    int acesso = 0;
    int senha = 2026;
    int senha_digitada;

    for(int i = 1 ; i <= 3 ; i++)
    {
        printf("%dª Tentativa Digite a senha: ", i);
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha)
        {
            printf("Acesso concedido");
            acesso = 1;
            break;
        }
        else
        {
            printf("Acesso negado\n");
        }
    }
    if (acesso == 0)
    {
        printf("Conta Bloqueada por Segurança");
    }
}