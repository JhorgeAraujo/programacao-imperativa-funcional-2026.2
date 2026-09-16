#include <stdio.h>
#include <math.h>

int main(){
    
    double altura_degrau, altura_total;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%lf", &altura_degrau);

    printf("Digite a altura que deseja alcançar em metros: ");
    scanf("%lf", &altura_total);

    altura_total = altura_total * 100;

    quantidade_degraus = ceil(altura_total / altura_degrau);

    printf("Voce precisa subir no minimo %d degraus.\n", quantidade_degraus);

}