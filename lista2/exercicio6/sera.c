#include <stdio.h>

int main()
{
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0 && n1 % 3 == 0)
    {
        printf("O numero %d é divisivel por 2 ou 3\n", n1);
    }
    else
    {
        printf("O numero %d nao e divisivel por nenhum dos dois\n", n1);
    }

    return 0;
}