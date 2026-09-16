#include <stdio.h>

int main(){

    const float pi = 3.141593;

    float raio;
    printf("Digite o valor de r: ");
    scanf("%f", &raio);

    printf("A area da superficie da sua esfera é: %.2f\nO volume da esfera é: %.2f", 4* pi * raio * raio, (4.0/3.0) * pi * raio * raio * raio);

}