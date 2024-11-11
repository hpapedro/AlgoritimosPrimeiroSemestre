#include <stdio.h>

int main()
{
    int n[5];
    int i;

    for (int i = 0; i < 5; i++)
    {
        printf("digite os numeros desejados: ");
        scanf("%i", &n[i]);
    }

    printf("A ordem inversa desses numeros é:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%i\n", n[i]);
    }

    return 0;
}