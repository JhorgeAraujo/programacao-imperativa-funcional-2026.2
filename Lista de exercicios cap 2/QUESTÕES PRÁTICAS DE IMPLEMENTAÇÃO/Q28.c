#include <stdio.h>

int main(){

    double horas_normais, horas_extras;
    double salario_bruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    salario_bruto = (horas_normais * 10.00) + (horas_extras * 15.00);

    if (salario_bruto <= 12000.00) 
    {
        imposto = 0;
    } 
    else 
    {
        imposto = (salario_bruto - 12000.00) * 0.10;
    }

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

}