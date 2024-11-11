#include <stdio.h>
int main()
{
    int opcao;
    int numero1;
    int numero2;
    int resultado;

    do
    {

        printf("Digite operacao desejada:\n"
               "1 SOMA: \n"
               "2 SUBTRACAO: \n"
               "3 MULTIPLICACAO: \n"
               "4 DIVISAO: \n"
               "5 SAIR\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%d", &numero1);

            printf("Digite o segundo número: ");
            scanf("%d", &numero2);

            resultado = numero1 + numero2;
            printf("Resultado da soma: %d\n", resultado);
            break;

        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            resultado = numero1 - numero2;
            printf("Resultado da subtracao: %d\n", resultado);
            break;

        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            resultado = numero1 * numero2;
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;

        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            if (numero2 != 0)
            {
                resultado = numero1 / numero2;
                printf("Resultado da divisao: %d\n", resultado);
            }
            else
            {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;

        case 5:
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opcao inválida.\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}