#include <stdio.h>

int main()
{
    double resultado = 0.0;
    int sinal = 1;
    double numerador = 1000.0;

    printf("Série: 1000/1 - 997/2 + 994/3 - 991/4 + ...\n");

    for (int i = 1; i <= 50; i++)
    {
        resultado += sinal * (numerador / i);
        sinal *= -1;
        numerador -= 3;
    }

    printf("Resultado dos primeiros 50 termos da série: %.2lf\n", resultado);

    return 0;
}