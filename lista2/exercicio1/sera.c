#include <stdio.h>
int main()
{

    int n1 = 0;
    int n2 = 0;

    printf("Digite o primeiro numero:");
    scanf("%i", &n1);

    printf("Digite o segundo numero:");
    scanf("%i", &n2);

    int soma = n1 + n2;

    if (soma < 20)
    {
        soma += 8;
    }
    else
    {
        soma -= 5;
    }

    printf("Resultado da soma com os valores ajustados: %d\n", soma);
    return 0;
}