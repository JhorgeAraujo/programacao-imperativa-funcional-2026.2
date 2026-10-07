#include <stdio.h>

int main(){
   
    float nota;
    int total_alunos = 0;
    float soma = 0.0;
    float maior_nota, menor_nota;

    printf("Digite as notas dos alunos (0.0 a 10.0). Digite -1.0 para encerrar:\n");

    while (1)
    {
        printf("Digite a nota do aluno %d: ", total_alunos + 1);
        scanf("%f", &nota);

        if (nota == -1.0f)
        {
            break;
        }

        if (nota < 0.0f || nota > 10.0f)
        {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0 (ou -1.0 para encerrar).\n");
            continue;
        }

        if (total_alunos == 0)
        {
            maior_nota = nota;
            menor_nota = nota;
        } 
        else
        {
            if (nota > maior_nota)
            {
                maior_nota = nota;
            }
            if (nota < menor_nota) 

                menor_nota = nota;
        }
    

        soma += nota;
        total_alunos++;
    }

    if (total_alunos == 0)
    {
        printf("\nNenhuma nota valida foi informada.\n");
    }
    else
    {

        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma: %.2f\n", maior_nota);
        printf("c) Menor nota da turma: %.2f\n", menor_nota);
        printf("d) Media geral da turma: %.2f\n", soma / total_alunos);
    }

}