#include <stdio.h>

int main(){

    int dias_trabalhados;
    double valor_bruto, imposto, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_bruto = dias_trabalhados * 30.00;

    imposto = valor_bruto * 0.08;

    valor_liquido = valor_bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Valor liquido: R$ %.2f\n", valor_liquido);

}