#include <stdio.h>

int main()
{

    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 >= 20 && n1 <= 90)
    {
        printf("O numero %d está dentro de 20 e 90\n", n1);
    }
    else
    {
        printf("O numero %d nao está dentro de 20 e 90\n", n1);
    }

    return 0;
}