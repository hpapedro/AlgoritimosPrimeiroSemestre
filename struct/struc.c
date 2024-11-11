#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct doador
{
    char nome[100];
    int idade;
    float peso;
    int estaNutrido;
    int estaResfriado;
    int consimiAlcool;
    int transoLegal;
};

typedef struct doador doador;

doador pegaDoador()
{
    doador x;

    printf("Nome completo: ");
    scanf(" %100[^\n]s", x.nome);

    printf("Idade:");
    scanf("%i", &(x.idade));

    printf("Peso: ");
    scanf("%f", &(x.peso));

    char opcao[4];

    printf("Está bem alimentado? (s/n)");
    scanf(" %3[^\n]", &(x.estaNutrido));
    x.estaNutrido = opcao == 's';

    printf("Consumiu alcool ultimas 24hrs?(s/n)");
    scanf("%i", &(x.consimiAlcool));

    printf("Teve relacoes sexuais com multiplos parceiros?(s/n)");
    scanf("%i", &(x.transoLegal));

    return x;
}

bool estaApto(doador x)
{

    return x.idade >= 16 && x.idade <= 69 && x.peso >= 50 && x.estaNutrido && !x.estaResfriado && !x.consimiAlcool && !x.transoLegal;
}

int main()
{
    printf("Bem vindo ao Hemobanco!\n");
    printf("Cadastro do doadores...\n");

    doador doadores[60];
    int num_doadores = 0;

    printf("Quantos doaadores voce quer cadastrar(max 60)? ");
    scanf("%i", &num_doadores);

    for (int i = 0; i < num_doadores; i++)
    {
        doadores[i] = pegaDoador();
    }
    for (int i = 0; i < num_doadores; i++)
    {
        if (estaApto(doadores[i]))
        {
            printf("%s esta apto!\n", doadores[i].nome);
        }
        else
        {
            printf("%s nao esta apto!\n", doadores[i].nome);
        }
    }

    doador x = pegaDoador();

    if (estaApto(x))
    {
        printf("%s esta apto! \n ", x.nome);
    }
    else
    {
        printf("%s nao esta apto! \n", x.nome);
    }

    return 0;
}