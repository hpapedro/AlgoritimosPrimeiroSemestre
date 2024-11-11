#include <stdio.h>

int main()
{
    double resultado = 0.0;

    printf("Série: 1/100 + 2/99 + 3/98 + ... + 100/1\n");

    for (int i = 1, j = 100; i <= 100; i++, j--)
    {
        resultado += (double)i / j;
    }

    printf("Resultado da série: %.2lf\n", resultado);

    return 0;
}