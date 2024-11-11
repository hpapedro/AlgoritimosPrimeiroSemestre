#include <stdio.h>

int main()
{

    int n1;
    int i = 2;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    if (n1 <= 2)
    {
        printf("numero inválido, digite um numero maior que 1\n");
        return 8;
    }

    printf("Numeros pares entre 1 e %d:\n", n1);

    while (i <= n1)
    {
        printf("%d\n", i);
        i += 2;
    }
}