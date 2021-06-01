#include <stdio.h>
#include <stdlib.h>

/*
Curso báscio de Linguagem C
aula 13 - Estruturas de repetição
*/

int numero,resposta;
int contador = 0;

int main(int argc, char *argv[]) 
{
do
{
	system("cls");
	printf("Tabuada\n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d", &numero);
	// a linha abaixo gera um laço finito
	for(contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n",numero,contador,numero*contador);
	}
	printf("\n1- Novo calculo\n");
	printf("\n2- Sair\n");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &resposta);
}while(resposta !=2);
	
	system("pause");
	return 0;
};

