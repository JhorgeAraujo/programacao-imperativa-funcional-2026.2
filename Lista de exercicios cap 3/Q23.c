#include <stdio.h>

int main() {
    int L;

    printf("Digite o tamanho do lado L (entre 3 e 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20)
    {
        printf("Valor invalido! L deve estar entre 3 e 20.\n");
        return 1;
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < L; j++)
        {
            if (i == 0 || i == L - 1 || j == 0 || j == L - 1)
            {
                printf("X");
            } 
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}