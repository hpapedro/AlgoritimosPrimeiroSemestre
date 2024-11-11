#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////

PROVA 1

individual e sem consulta
respostas com cola ou plagio serão anuladas
fazer tudo neste arquivo e subir novamente no blackboard
valor total 4.0

MAQUINA DE APOSTAS

(1.0)

implemente um programa em que o usuario possa fazer apostas de seis numeros de 1 a 60
o programa deve imprimir uma mensagem de apresentacao e depois ler os numeros
se qualquer um dos numeros estiver fora do intervalo, o programa deve imprimir "aposta invalida"
caso contrario, o programa deve imprimir "aposta efetuada"

(1.0)

caso a aposta tenha sido efetuada, o programa deve tambem imprimir:
qual foi o menor numero inserido
qual foi o maior numero inserido
qual eh a media dos numeros inseridos

(1.0)

ainda caso a aposta tenha sido efetuada,
se mais da metade dos numeros forem pares, o programa deve imprimir a mensagem "boa sorte!"
se menos da metade dos numeros forem multiplos de tres, o programa deve imprimir a mensagem "vai dar boa!"

(1.0)

em seguida o programa deve perguntar se o usuario deseja fazer outra aposta
caso o usuario digite 1, voltar ao inicio
caso digite 2, encerrar programa
caso contrario, continuar perguntando se ele deseja fazer outra aposta

//////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

int main()
{

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    float apostas;
    int media = 0;
    int opcao;

    printf("Bem vindo a sua Aposta !\n");

    do
    {

        printf("Somente numeros ente 1 e 60\n");
        printf("Insira NUMERO1: ");
        scanf("%i", &n1);
        while (n1 > 60 || n1 < 1)
        {

            if (n1 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n1);
            }
            else if (n1 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n1);
            }
        }

        printf("Insira NUMERO2: ");
        scanf("%i", &n2);
        while (n2 > 60 || n2 < 1)
        {
            if (n2 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n2);
            }
            else if (n2 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n2);
            }
        }

        printf("Insira NUMERO3: ");
        scanf("%i", &n3);
        while (n3 > 60 || n3 < 1)
        {
            if (n3 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n3);
            }
            else if (n3 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n3);
            }
        }

        printf("Insira NUMERO4: ");
        scanf("%i", &n4);

        while (n4 > 60 || n4 < 1)
        {
            if (n4 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n4);
            }
            else if (n4 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n4);
            }
        }

        printf("Insira NUMERO5: ");
        scanf("%i", &n5);
        while (n5 > 60 || n5 < 1)
        {
            if (n5 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n5);
            }
            else if (n5 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n5);
            }
        }

        printf("Insira NUMERO6: ");
        scanf("%i", &n6);
        while (n6 > 60 || n6 < 1)
        {
            if (n6 > 60)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n6);
            }
            else if (n6 < 0)
            {
                printf("Numero invalido, tentou outro numero: \n");
                scanf("%i", &n6);
            }
        }

        int menor = n1;

        if (n2 < menor)
        {
            menor = n2;
        }

        if (n3 < menor)
        {
            menor = n3;
        }

        if (n4 < menor)
        {
            menor = n4;
        }

        if (n5 < menor)
        {
            menor = n5;
        }

        if (n6 < menor)
        {
            menor = n6;
        }
        printf("O menor numero entre %d, %d, %d, %d, %d e %d: %d\n", n1, n2, n3, n4, n5, n6, menor);

        int maior = n1;

        if (n2 > maior)
        {
            maior = n2;
        }

        if (n3 > maior)
        {
            maior = n3;
        }

        if (n4 > maior)
        {
            maior = n4;
        }

        if (n5 > maior)
        {
            maior = n5;
        }

        if (n6 > maior)
        {
            maior = n6;
        }
        printf("O maior numero entre %d, %d, %d, %d, %d e %d: %d\n", n1, n2, n3, n4, n5, n6, maior);
        if (apostas == n1)
        {
            media++;
        }
        if (apostas == n2)
        {
            media++;
        }
        if (apostas == n3)
        {
            media++;
        }
        if (apostas == n4)
        {
            media++;
        }
        if (apostas == n5)
        {
            media++;
        }
        if (apostas == n6)
        {
            media++;
        }

        printf("A media numero entre %d, %d, %d, %d, %d e %d: %d\n", n1, n2, n3, n4, n5, n6, media++ / 6);

        if (media > 0)
        {
            apostas /= media;
        }

        printf("Digite oq deseja! \n"
               "1 VOLTAR AO INICIO\n"
               "2 ENCERRAR O PROGRAMA\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:

        case 2:
            printf("Saindo do programa\n");
            break;

        default:
            printf("Opcao invalida\n");
        }
    } while (opcao != 2);

    return 0;
}
