#include <stdio.h>

int main() {

    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);

   int antecessor = numero;
   int posterior = numero;

   antecessor--;
   posterior++;

   printf("%d | %d | %d", antecessor, numero, posterior);


}