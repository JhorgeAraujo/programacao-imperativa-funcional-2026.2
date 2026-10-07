#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("\n=== GERENCIAMENTO DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o salario atual (R$): ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Salario invalido! Digite um valor positivo.\n");
                    break;
                }

                if (salario <= 2000.00f) {
                    novo_salario = salario * 1.15f;
                } else {
                    novo_salario = salario * 1.10f;
                }

                printf("Novo salario recalculado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\nDigite o salario bruto (R$): ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Salario invalido! Digite um valor positivo.\n");
                    break;
                }

                if (salario <= 3000.00f) {
                    desconto = salario * 0.08f;
                } else {
                    desconto = salario * 0.15f;
                }

                printf("Valor retido do Imposto de Renda: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha uma opcao entre 1 e 3.\n");
        }
    } while (opcao != 3);

    return 0;
}