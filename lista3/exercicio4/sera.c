#include <stdio.h>

int main()
{

    int i = 1;
    int soma = 0;

    while (i < 101)
    {
        printf("%i\n", i);
        soma += i;
        i++;
    }

    printf("Resultado da soma de todos numeros é: %i\n", soma);

    return 0;
}