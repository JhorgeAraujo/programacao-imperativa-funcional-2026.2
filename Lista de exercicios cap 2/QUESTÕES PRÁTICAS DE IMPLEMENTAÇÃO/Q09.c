#include <stdio.h>

int main(){

    int num1;
    int num2;
    printf("Escreava 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    if (num2 != 0)  //utilizei o if para separa quando o usuario escolhe 0 no segundo numero e quando escolher qualquer outro numero
    {
        float divisao = (float)num1 / (float)num2;
    
        printf("Soma = %d\nSubtração = %d\nMultiplicação = %d\nDivisão = %.2f", soma, subtracao, multiplicacao, divisao);
    }
    else
    {
        printf("Soma = %d\nSubtração = %d\nMultiplicação = %d\nDivisão = Não é possivel realizar divisões por ZERO", soma, subtracao, multiplicacao);
    }

    

}