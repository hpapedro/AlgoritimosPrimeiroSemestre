/*
	atividade 1 de algoritmos (1.0)

	imagine que a disciplina de algoritmos possui estudantes do curso de BSI e do curso de ADS
	o professor precisa lancar as notas de todos os estudantes, mas gerar estatisticas separadas para cada curso
	se o estudante tirar mais que 7.0 ele eh aprovado, se tirar menos que 3.0 ele eh reprovado, caso contrario fica de final
	implemente um programa em que o usuario possa inserir uma quantidade qualquer de notas
	o programa deve comecar exibindo uma mensagem de boas-vindas e explicando o que o usuario deve fazer
	ao inserir cada nota o usuario devera informar tambem o curso do estudante
	nao eh permitido inserir primeiro os de um curso e depois do outro, as notas devem poder ser inseridas em qualquer ordem
	apos todas as notas terem sido inseridas, o programa deve informar:
		- qual a media geral de cada curso
		- quantos estudantes de cada curso foram reprovados
		- quantos estudantes de cada curso ficaram de final
		- quantos estudantes de cada curso foram aprovados
		- qual o percentual total de alunos aprovados
		- qual curso teve mais notas acima de 9.0
		- quantos estudantes tiraram zero
	por fim o programa deve perguntar se o usuario quer repetir o processo, caso sim voltar ao inicio, caso nao deve se despedir e encerrar
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int curso;
	float nota;
	float mediaBSI = 0;
	float mediaADS = 0;
	int reprovadosBSI = 0;
	int reprovadosADS = 0;
	int finalBSI = 0;
	int finalADS = 0;
	int aprovadosBSI = 0;
	int aprovadosADS = 0;
	int acimaNoveBSI = 0;
	int acimaNoveADS = 0;
	int alunosZero = 0;
	int totalAlunos = 0;

	printf("Seja bem vindo ao sistema de notas\n");

	while (1)
	{
		printf("Digite 1 para BSI, 2 para ADS, e adicione a nota, ou digite 0 para sair:\n");
		scanf("%i", &curso);

		if (curso == 0)
		{
			break;
		}

		scanf("%f", &nota);

		if (nota == 0)
		{
			alunosZero++;
		}

		else if (curso == 1)
		{
			totalAlunos++;
			mediaBSI += nota;

			if (nota < 3.0)
			{
				reprovadosBSI++;
			}

			else if (nota >= 7.0)
			{
				aprovadosBSI++;

				if (nota > 9.0)
				{
					acimaNoveBSI++;
				}
			}
			else
			{
				finalBSI++;
			}
		}

		else if (curso == 2)
		{
			totalAlunos++;
			mediaADS += nota;

			if (nota < 3.0)
			{
				reprovadosADS++;
			}

			else if (nota >= 7.0)
			{
				aprovadosADS++;

				if (nota > 9.0)
				{
					acimaNoveADS++;
				}
			}
			else
			{
				finalADS++;
			}
		}
	}

	if (totalAlunos > 0)
	{
		mediaBSI /= totalAlunos;
		mediaADS /= totalAlunos;
	}

	printf("Estatísticas:\n");
	printf("Média BSI: %.2f\n", mediaBSI);
	printf("Média ADS: %.2f\n", mediaADS);
	printf("Alunos reprovados BSI: %d\n", reprovadosBSI);
	printf("Alunos reprovados ADS: %d\n", reprovadosADS);
	printf("Alunos final BSI: %d\n", finalBSI);
	printf("Alunos final ADS: %d\n", finalADS);
	printf("Alunos aprovados BSI: %d\n", aprovadosBSI);
	printf("Alunos aprovados ADS: %d\n", aprovadosADS);
	printf("Percentual alunos aprovados: %.2f%%\n", (float)(aprovadosBSI + aprovadosADS) / totalAlunos * 100);

	if (acimaNoveBSI > acimaNoveADS)
	{
		printf("Curso com mais notas 9.0: BSI\n");
	}

	else if (acimaNoveADS > acimaNoveBSI)
	{
		printf("Curso com mais notas 9.0: ADS\n");
	}

	else
	{
		printf("Ambos os cursos têm 9.0\n");
	}

	printf("Alunos com zero: %d\n", alunosZero);

	return 0;
}
