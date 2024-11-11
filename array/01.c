/*Fazer uma funcao que o programa para gerir um frota de caminhao,
perguntar para o usuário o tamanho da frota, e o periodo que ele quer monitorar meses
maximo 24, para cada caminhao e para cada mes,
ter que devolver o consumo de gasolina, a kilometragem e valor tanspportado numero de caminhoes e meses, consumo, km rodado e o vlaor transportado, consumo medio, caminhao que transportou maior valor.
*/

#include <stdio.h>

#define max_caminhao 20
#define max_meses 12

int pega_valorvalido(int valor_max){
    
    int num_desejado = 0;

    while(1)
    {
        scanf(" %i", &num_desejado);
        if(num_desejado >=1 && num_desejado <= valor_max)
        {
            break;
        }
        else{
        printf("o numero deve estar entre 1 e %i", max_caminhao);
        }
    }
        return num_desejado;

}

void funcao(int x, int y)
{
        int kms[max_caminhao];
        int combustivel;
        int valor[max_caminhao];
        float soma_consumos = 0.0;
    
    for (int i = 0; i < y; i++)
    {

        
        for(int i = 0; i < x; i++){
        printf("Digite a quantidade de km`s rodados por caminhao\n");
        scanf("%i", &kms[i]);


        printf("Digite a quantidade de combustivel gasto por caminhao\n");
        scanf("%i", &combustivel);
        soma_consumos +=combustivel;

        printf("Digite o valor por caminhao\n");
        scanf("%i", &valor[i]);

        printf("%i, %i, %i/n", kms[i], combustivel[i], valor[i]);
        }
        
    }
    float media_consumo = combustivel[i] / max_caminhao;

}

int main()
{


    int meses = 0;

    

    printf("Digite o numero de meses que deseja entrar, max: %i\n", max_meses);
    int num_meses = pega_valorvalido(max_caminhao);

    printf("Digite o numero de caminhoes que deseja entrar, max: %i\n˜", max_caminhao);
    int num_caminhoes = pega_valorvalido(max_meses);


    funcao(num_caminhoes, num_meses);

    return 0;
}