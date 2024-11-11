#include <stdio.h>

int main() {
    int opcao;

    do {
        // Mostra o menu
        printf("Menu:\n");
        printf("1. Inserir\n");
        printf("2. Excluir\n");
        printf("3. Consultar\n");
        printf("4. Listar\n");
        printf("5. Sair\n");
        printf("Escolha uma opção (1-5): ");
        scanf("%d", &opcao);

        // Verifica a opção escolhida e mostra o nome da opção
        switch (opcao) {
            case 1:
                printf("Opção escolhida: Inserir\n");
                break;
            case 2:
                printf("Opção escolhida: Excluir\n");
                break;
            case 3:
                printf("Opção escolhida: Consultar\n");
                break;
            case 4:
                printf("Opção escolhida: Listar\n");
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
