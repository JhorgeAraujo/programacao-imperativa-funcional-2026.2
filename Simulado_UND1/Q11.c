#include <stdio.h>

int main(){

    const float salariopordia = 45.00;

    int dias_trabalhados;

    float salario_base, bonificacao, salario_bruto, imposto, salario_liquido;

    printf("Quantos dias voce trabalhou? ");
    scanf("%d", &dias_trabalhados);

    salario_base = dias_trabalhados * salariopordia;

    bonificacao = salario_base * 0.05;

    salario_bruto = salario_base + bonificacao;

    imposto = salario_bruto * 0.08;

    salario_liquido = salario_bruto - imposto;

    printf("Salario base: R$ %.2f\n", salario_base);
    printf("Bonificacao: R$ %.2f\n", bonificacao);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

}