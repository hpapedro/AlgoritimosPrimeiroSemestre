#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void bemVindo(int n)
{
    printf("Bem Vindo!!\nSeu numero da sorte eh %i\n", n);
    return;
}
int main()
{
    srand(time(NULL));

    int x = (rand() % 100) + 1;

    bemVindo(666);

    printf("insira %i numeros do primeiro vetor: ", TAM);
    float v[TAM];

    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &v[i]);
    }

    printf("insira %i numeros do segundo vetor: ", TAM);
    float w[TAM];

    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &w[i]);
    }

    float produto = 0.0;
    for (int i = 0; i < TAM; i++)
    {
        produto = produto + (v[i] * w[i]);
    }
    printf("o produto é %.2f\n", produto);

    return 0;
}