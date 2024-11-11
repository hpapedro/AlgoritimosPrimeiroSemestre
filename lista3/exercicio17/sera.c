#include <stdio.h>

int main()
{
    double numero;
    double maior = -1e9; // Inicializa o maior com um valor muito pequeno
    double menor = 1e9;  // Inicializa o menor com um valor muito grande

    printf("Digite uma sequência de números reais positivos (0 para encerrar):\n");

    while (1)
    {
        printf("Digite um número: ");
        scanf("%lf", &numero);

        if (numero == 0)
        {
            break; // Encerra o loop quando 0 for digitado
        }

        if (numero > maior)
        {
            maior = numero; // Atualiza o maior, se necessário
        }

        if (numero < menor)
        {
            menor = numero; // Atualiza o menor, se necessário
        }
    }

    if (maior == -1e9 || menor == 1e9)
    {
        printf("Nenhum número positivo foi inserido.\n");
    }
    else
    {
        double amplitude = maior - menor;
        printf("A amplitude estatística dos valores é: %.2lf\n", amplitude);
    }

    return 0;
}