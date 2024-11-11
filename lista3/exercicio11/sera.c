#include <stdio.h>

int main()
{
    int i;
    int termo = 1; // O primeiro termo da série é 1

    printf("Os 10 primeiros termos da série são:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", termo);
        termo *= 3; // Multiplica o termo anterior por 3 para obter o próximo termo
    }

    printf("\n");

    return 0;
}