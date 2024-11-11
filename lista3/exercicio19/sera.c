#include <stdio.h>

int main()
{
    int escolha;
    int numero;

    do
    {
        printf("# MENU PRINCIPAL #\n");
        printf("[1] Digitar um número par\n");
        printf("[2] Digitar um número ímpar\n");
        printf("[3] Sair\n");
        printf("Escolha uma opção (1-3): ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Digite um número par: ");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                printf("Número par digitado: %d\n", numero);
            }
            else
            {
                printf("Número digitado não é par!\n");
            }
            break;
        case 2:
            printf("Digite um número ímpar: ");
            scanf("%d", &numero);
            if (numero % 2 != 0)
            {
                printf("Número ímpar digitado: %d\n", numero);
            }
            else
            {
                printf("Número digitado não é ímpar!\n");
            }
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (escolha != 3);

    return 0;
}
