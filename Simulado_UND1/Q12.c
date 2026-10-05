#include <stdio.h>

int main(){

    float nota;
    do
    {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if(nota < 0 || nota > 10)
    {
        printf("Nota INVALIDA!\n");
    }
    } while(nota < 0 || nota > 10);
    

}