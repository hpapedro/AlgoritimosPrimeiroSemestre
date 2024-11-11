#include <stdio.h>

int main()
{
    int soma = 0;
    int contador = 0;

    while (soma <= 100)
    {
        contador++;
        soma += contador;
    }

    printf("São necessários pelo menos %d números em sequência para que a soma ultrapasse 100.\n", contador);

    return 0;
}
