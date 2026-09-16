#include <stdio.h>

int main(){

    double salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;

    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salario_liquido);

}