#include <stdio.h>

int main()
{

     while (1)
     {
          int saque = 0;
          int cem = 0;
          int cinquenta = 0;
          int vinte = 0;
          int dez = 0;
          int cinco = 0;

          printf("Digite o valor do saque: ");
          scanf("%d", &saque);

          if (saque % 5 != 0)
          {
               printf("valor do saque deve ser multiplo de 5\n");
          }

          if (saque >= 100)
          {
               cem = saque / 100;
               saque %= 100;
          }

          if (saque >= 50)
          {
               cinquenta = saque / 50;
               saque %= 50;
          }

          if (saque >= 20)
          {

               vinte = saque / 20;
               saque %= 20;
          }

          if (saque >= 10)
          {

               dez = saque / 10;
               saque %= 10;
          }

          if (saque >= 5)
          {

               cinco = saque / 5;
               saque %= 5;
          }

          printf("%i Notas de cem\n", cem);
          printf("%i Notas de cinquenta\n", cinquenta);
          printf("%i Notas de vinte\n", vinte);
          printf("%i Notas de dez\n", dez);
          printf("%i Notas de cinco\n", cinco);

          char opcao;
          printf("Deseja fazer outro saque? (S/N): ");
          scanf(" %c", &opcao);

          if (opcao != 'S' && opcao != 's')
          {
               break; // Sai do loop se nao for 'S' ou 's'
          }
     }

     return 0;
}