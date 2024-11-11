#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int num = rand() % 100;
    int tentativas = 1;
    int palpite;

    printf("Bem vindo, tente acertar o numero, você tem 10 tentativas\n");
    while (tentativas < 11)
    {
        printf("Tentativa %d Digite um numero:\n", tentativas);
        scanf("%d", &palpite);

        if (palpite > num)
        {
            printf("O numero e MENOR\n");
        }
        else if (palpite < num)
        {
            printf("O numero é MAIOR\n");
        }
        else
        {
            printf("Parabéns voce acertou!\n");
            break;
        }

        tentativas++;
    }
    if (tentativas == 11)
    {
        printf("ERROU!\n");
    }

    return 0;
}