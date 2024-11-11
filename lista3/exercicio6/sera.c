#include <stdio.h>

int main()
{
    int numero, soma = 0;

    do
    {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        soma += numero;
    } while (numero != 0);

    printf("A soma dos números fornecidos é: %d\n", soma);

    return 0;
}
// Neste programa, usamos um loop "do-while" para continuar solicitando números até que o usuário insira 0. A cada iteração, somamos o número fornecido ao total acumulado na variável "soma".Quando o usuário insere 0, o loop é interrompido e o resultado da soma é exibido.
