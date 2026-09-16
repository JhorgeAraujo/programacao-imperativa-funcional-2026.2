#include <stdio.h>

int main(){

    int comprimento, largura; //metros
    float preco_metro_arame;

    printf("Qual o comprimeto e largura do seu terreno?: ");
    scanf("%d %d", &comprimento, &largura);

    printf("Quanto custa o metro do arame?: ");
    scanf("%f", &preco_metro_arame);

    int perimetro = 2 * (comprimento + largura);
    int metros_arame = 3 * perimetro;
    float valor_arame = metros_arame * preco_metro_arame;


    printf("Para cercar o terreno de perimetro %d deve-se utilizar %d metros de arame que ira custar %.2f reais", perimetro, metros_arame, valor_arame);

}