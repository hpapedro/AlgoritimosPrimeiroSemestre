#include <stdio.h>

int main()
{
    int n = 10; // Número de termos a serem gerados
    int primeiro = 1, segundo = 1, proximo;

    printf("Os primeiros %d números da sequência de Fibonacci:\n", n);
    printf("%d, %d, ", primeiro, segundo);

    for (int i = 2; i < n; i++)
    {
        proximo = primeiro + segundo;
        printf("%d", proximo);

        if (i < n - 1)
        {
            printf(", ");
        }

        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}