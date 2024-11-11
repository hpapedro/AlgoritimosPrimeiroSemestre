#include <stdio.h>

int main()
{

    int opcao;
    float altura_cm;

    do
    {

        printf("Informe seu genero:\n"
               "1 MASCULINO: \n"
               "2 FEMININO: \n"
               "3 SAIR: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite sua altura:\n ");
            scanf("%f", &altura_cm);

            float peso_ideal_homens = 72.7 * (altura_cm);
            float peso_ajustado_homens = peso_ideal_homens - 58.0;

            printf("Altura x 72.7 = %.2f kg\n", peso_ideal_homens);
            printf("Seu peso ajustado é: %.2f kg\n", peso_ajustado_homens);
            break;

        case 2:
            printf("Digite sua altura:\n ");
            scanf("%f", &altura_cm);

            float peso_ideal_mulheres = 62.1 * (altura_cm);
            float peso_ajustado_mulheres = peso_ideal_mulheres - 44.7;

            printf("Altrua x 62.1 %.2f kg\n", peso_ideal_mulheres);
            printf("Seu peso ajustado é: %.2f kg\n", peso_ajustado_mulheres);
            break;

        case 3:
            printf("Saindo do programa\n");
            break;

        default:
            printf("Opcao inválida.\n");
            break;
        }

    } while (opcao != 3);

    return 0;
}
