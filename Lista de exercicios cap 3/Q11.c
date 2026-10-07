#include <stdio.h>

int main(){

    int A, B;
    printf("Digite 2 numeros inteiros; ");
    scanf("%d %d", &A, &B);

    if (A <= B) //crescente
    {
        for (int i = A ; i <= B ; i++)
        {
            printf("%d ", i);
        }
    }
    else //decrescente
    {
        for(int i = A ; i >= B ; i--)
        {
            printf("%d ", i);
        }
    }
}