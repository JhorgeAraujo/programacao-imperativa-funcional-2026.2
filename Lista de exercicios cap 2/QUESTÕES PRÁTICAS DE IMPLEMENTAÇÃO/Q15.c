#include <stdio.h>

int main(){

    float n1, n2, n3 , n4;
    float media, ponderada;

    printf("Digite as notas da AV1 - AV4: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6;

    printf("Media aritimetica: %.2f\nMedia ponderada: %.2f", media, ponderada);

}