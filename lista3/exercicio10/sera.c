#include <stdio.h>

int main()
{
    int numero;
    unsigned long long fatorial = 1;

    // Solicita ao usuário um número
    printf("Digite um número positivo para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0)
    {
        printf("O fatorial não está definido para números negativos.\n");
    }
    else
    {
        // Calcula o fatorial
        for (int i = 1; i <= numero; i++)
        {
            fatorial *= i;
        }

        // Exibe o resultado
        printf("%d! = %llu\n", numero, fatorial);
    }

    return 0;
}