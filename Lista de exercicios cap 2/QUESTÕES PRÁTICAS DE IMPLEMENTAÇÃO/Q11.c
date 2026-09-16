#include <stdio.h>

int main() {

    const double PI = 3.141593;
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180);

    printf("Angulo -> radianos: %.6f\n", radianos);

}