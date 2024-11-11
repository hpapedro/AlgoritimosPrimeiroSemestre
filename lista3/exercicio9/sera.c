#include <stdio.h>

int main()
{
    printf("Tabela de Conversão de Temperatura\n");
    printf("==================================\n");
    printf("Celsius   Fahrenheit\n");
    printf("======================\n");

    int celsius;
    float fahrenheit;

    for (celsius = 0; celsius <= 100; celsius += 5)
    {
        // Fórmula de conversão de Celsius para Fahrenheit: F = (C × 9/5) + 32
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%3d°C       %6.2f°F\n", celsius, fahrenheit);
    }

    return 0;
}