#include <stdio.h>

int main()
{
    int idade;
    int opcao;
    int sair;

    do
    {

        printf("Digite sua idade.");
        scanf("%d", &idade);

        if (idade >= 65)
        {
            printf("Voce tem %d anos de idade com isso voce é veio.\n", idade);
        }

        if (idade <= 18)
        {
            printf("Voce tem %d anos de idade, com isso voce é um juvenil.\n", idade);
        }

        if (idade >= 19 && idade <= 64)
        {
            printf("Voce tem %d anos de idade, com isso voce nao é nem veio nem juvenil.\n", idade);
        }
    } while (opcao != 5);
}
