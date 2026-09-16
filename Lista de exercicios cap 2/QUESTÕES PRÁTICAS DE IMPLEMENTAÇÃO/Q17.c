#include <stdio.h>

int main(){

    const float pi = 3.141593;

    float raio;
    printf("Digite o valor de r: ");
    scanf("%f", &raio);

    printf("A area do seu circulo é: %.2f\nA circunferencia do circulo é: %.2f", pi * raio * raio, 2 * pi * raio);

}