#include <stdio.h>

int main()
{
    double resultado = 0.0;
    double denominador = 1.0;

    printf("Série: 1/1 + 3/2 + 5/4 + 7/8 + ...\n");

    for (int i = 0; i < 20; i++)
    {
        resultado += (2 * i + 1) / denominador;
        denominador *= 2;
    }

    printf("Resultado dos primeiros 20 termos da série: %.2lf\n", resultado);

    return 0;
}