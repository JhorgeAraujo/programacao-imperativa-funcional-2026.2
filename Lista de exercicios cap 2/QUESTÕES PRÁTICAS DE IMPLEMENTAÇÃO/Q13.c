#include <stdio.h>

int main(){

    float lado, base, altura;

    printf("Por favor digite os dados de lado(L) base(B) e altura(H): ");
    scanf("%f %f %f", &lado, &base, &altura);

    float quadrado = lado * lado;
    float retangulo = base * altura;
    float triangulo = (base * altura) / 2;

    printf("A área d quadrado é %.2f\nA área do retangulo é %.2f\nA area do triangulo é %.2f", quadrado, retangulo, triangulo);
}