#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main()
{

    printf("Insira seu nome completo (max. %i): ", TAM - 1);

    char nome[TAM];

    char aux[] = "%%[^\n]s";

    // 99 é para ser i TAM-1
    scanf("%99[^\n]s", nome);
    printf("Seu nome eh %s\n", nome);

    int tam = 0;
    for (int i = 0; i < TAM; i++)
    {
        if(nome[i]) != ''
        if (nome[i] == '\0')
        {
            break;
        }
    }

    return 0;
}
