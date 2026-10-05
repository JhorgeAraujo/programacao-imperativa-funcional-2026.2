#include <stdio.h>

int main(){

    int tempo, horas, minutos, segundos;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("%02d:%02d:%02d", horas, minutos, segundos);


    
}