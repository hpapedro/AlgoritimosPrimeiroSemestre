#include <stdio.h>

int main()
{
    int senha_correta = 2009;
    int senha;
    int tentativas = 0;

    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha != senha_correta)
        {
            printf("ACESSO NEGADO\n");
        }
    } while (senha != senha_correta);

    printf("ACESSO PERMITIDO\n");
    printf("Número de tentativas: %d\n", tentativas);

    return 0;
}
