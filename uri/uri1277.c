/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
	char nome[200];
	short presenca,ausencia, atestado;
	float porcPresenca;

} classe;

int main ()
{

	unsigned short qtsAlunos, casos;
	unsigned short i, aux, j;
	char registro[5000];

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf("%hu", &qtsAlunos);

		classe alunos[qtsAlunos];
		memset(alunos, 0, sizeof(alunos));

		for (i = 0; i < qtsAlunos; i++)
			scanf(" %s", alunos[i].nome);

		aux = qtsAlunos;

		i = 0;
		bool primSpaco = false;
		while (aux--)
		{

			scanf(" %s", registro);

			for (j = 0; registro[j]; j++)
			{

				if (registro[j] == 'P')
					alunos[i].presenca++;
				else if (registro[j] == 'A')
					alunos[i].ausencia++;
				else if (registro[j] == 'M')
					alunos[i].atestado++;

			}

			memset(registro, 0, sizeof(registro));

			alunos[i].porcPresenca = (1.0f * alunos[i].presenca) / (alunos[i].presenca + alunos[i].ausencia);

			if (alunos[i].porcPresenca < 0.75f)
			{
				if (primSpaco)
					printf(" ");

				printf("%s", alunos[i].nome);

				primSpaco = true;
			}

			i++;

		}

		printf("\n");

	}

}