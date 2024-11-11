#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[6];
    float multiploDois = 0;
    float multiploTres = 0;
    int soma;
    int maior;
    int menor;
    int opcao;
    do
    {
        for (int i = 0; i < 6; i++)
        {
            printf("digite um numero");
            scanf("%i", &n[1]);

            if (n[1] % 2 == 0)
            {
                multiploDois++;
            }
            if (n[1] % 3 == 0)
            {
                multiploTres++;
            }

            soma += n[1];
            if (n[1] > maior)
            {
                maior = n[1];
            }
            if (n[1] < menor)
            {
                menor = n[1];
            }
        }
        printf("Quantidade de números múltiplos de 2: %.0f\n", multiploDois);
        printf("Quantidade de números múltiplos de 3: %.0f\n", multiploTres);
        printf("numero maior: %i\n", maior);
        printf("numero menor %i\n", menor);

        printf("Digite oq deseja! \n"
               "1 VOLTAR AO INICIO\n"
               "2 ENCERRAR O PROGRAMA\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            break;
        case 2:
            printf("Saindo do programa\n");
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 2);
    return 0;
}