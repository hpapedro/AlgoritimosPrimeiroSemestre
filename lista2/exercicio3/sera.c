#include <stdio.h>

int main()
{
    int n1;
    int opcao;
    int sair;

    do
    {

        printf("Digite um número: ");
        scanf("%d", &n1);

        if (n1 < 0)
        {
            n1 = -n1;
        }

        printf("O valor absoluto é: %d\n", n1);

    } while (opcao != 5);
    return 0;
}