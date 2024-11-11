#include <stdio.h>

int main()
{
    int numero, valorInicial, valorFinal;

    // Solicita ao usuário um número
    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &numero);

    // Solicita ao usuário o valor inicial e final
    printf("Digite o valor inicial da tabuada: ");
    scanf("%d", &valorInicial);

    printf("Digite o valor final da tabuada: ");
    scanf("%d", &valorFinal);

    // Exibe a tabuada do número dentro do intervalo fornecido
    printf("Tabuada do %d de %d a %d:\n", numero, valorInicial, valorFinal);
    for (int i = valorInicial; i <= valorFinal; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
// Neste programa, o usuário pode fornecer o número para o qual deseja calcular a tabuada, bem como os valores inicial e final do intervalo desejado.Em seguida, a tabuada desse número será exibida apenas para os valores dentro desse intervalo.
