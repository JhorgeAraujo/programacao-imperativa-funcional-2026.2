#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159265;
    double r;

    printf("Qual o Raio da esfera?: ");
    scanf("%lf", &r);

    double superficie = 4.0 * PI * pow(r, 2);
    double volume = 4.0/3.0 * PI * pow(r, 3);

    printf("A área da superficie da sua esfera é: %.3f\nO volume da sua espera é: %.3f", superficie, volume);

}