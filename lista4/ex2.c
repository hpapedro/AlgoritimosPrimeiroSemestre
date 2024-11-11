#include <stdio.h>

int main()
{
    int n[5];
    int i;
    float impar = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("digite os numeros desejados: ");
        scanf("%i", &n[i]);
    }

    printf("Números ímpares:\n");
    for (int i = 0; i < 5; i++)
    {
        if (n[i] % 2 != 0)
        {
            printf("%i\n", n[i]);
        }
    }

    return 0;
}