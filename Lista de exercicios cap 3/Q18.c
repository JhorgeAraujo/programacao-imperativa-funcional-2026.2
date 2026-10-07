#include <stdio.h>

int main(){
    int num, original;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) 
    {
        printf("Por favor, digite um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    original = num; 

  
    while (num > 0)
    {
        int digito = num % 10;               
        invertido = (invertido * 10) + digito; 
        num = num / 10;                       
    }

    printf("O numero %d invertido e: %d\n", original, invertido);
}