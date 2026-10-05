#include <stdio.h>

int main(){

    int senha = 1234;
    int tentativa;
    int acesso = 0;

    for(int i = 0; i < 3; i++)
    {
        printf("digite a senha: ");
        scanf("%d", &tentativa);

        if(tentativa == senha)
        {
            printf("Acesso concedido!");
            acesso ++;
            break;
        }
        else
        {
            printf("Acesso negado!\n");    
        }
    }
    if (acesso == 0)
    {
        printf("CONTA BLOQUEADA POR SEGURANÇA!");
    }

}