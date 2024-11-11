#include <stdio.h>
int main()
{
    int n1 = 0;
    int n2 = 0;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf("%d %d\n", n1, n2);
    }
    else if (n2 < n1)
    {
        printf("%d %d\n", n2, n1);
    }
}
