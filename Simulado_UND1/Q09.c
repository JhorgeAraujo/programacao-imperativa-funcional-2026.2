#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    printf("Informe os lados do seu triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double p = (a + b + c) / 2.0;
    double heron = sqrt (p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo é: %.2f", heron);


}