#include <stdio.h>

int main()
{

    int n1;
    int n2;
    int n3;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    printf("Digite o terceiro numero:");
    scanf("%d", &n3);

    int menor = n1;

    if (n2 < menor)
    {
        menor = n2;
    }

    if (n3 < menor)
    {
        menor = n3;
    }
    printf("O menor numero entre %d, %d e %d: %d\n", n1, n2, n3, menor);

    return 0;
}