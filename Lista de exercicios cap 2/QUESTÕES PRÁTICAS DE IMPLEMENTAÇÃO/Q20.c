#include <stdio.h>
#include <math.h>

int main(){
//a² = b² + c²    

    float a, b, c;
    printf ("Quais os valores dos catetos do seu triangulo?: ");
    scanf("%f %f", &b, &c);

    a = pow(b, 2) + pow(c, 2);

    printf("A hipotenusa do seu triangulo é: %.2f", sqrt(a));
}