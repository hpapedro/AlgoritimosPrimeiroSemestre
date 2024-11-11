#include <stdio.h>

int main()
{
    int n[10];

    // Inicialize o array com valores de 1 a 10
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 1;
    }

    // Agora, faça a contagem regressiva e imprima os valores
    for (int i = 9; i >= 0; i--)
    {
        printf("%i\n", n[i]);
    }

    return 0;
}
