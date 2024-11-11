#include <stdio.h>

int main()
{

    int n1;
    int n2;
    int sair;
    int opcao;
    do
    {

        printf("Digite um numero:");
        scanf("%d", &n1);

        if (n1 >= 0)
        {
            if (n1 % 2 == 0)
            {
                printf("%d esse numero é par.\n", n1);
            }
            else
            {
                printf("%d esse numero é impar.\n", n1);
            }
        }
        else
        {
            printf("o valor absoluto de %d é %d.\n", n1, -n1);
        }
    } while (opcao != 5);
}
