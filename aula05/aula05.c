#include <stdio.h>
#include <stdlib.h>

/*
Aula 6 - Switch case
*/

//variavel global
int numero;

int main(int argc, char *argv[]) 

{
	printf("Sistemas\n\n");
	printf("1 - Windows\n");
	printf("2 - Linux\n");
	printf("\nEscolha a opcao desejada: \n");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1:
			system("cls");
			printf("Iniciando o Windows...\n");
			break;
			
		case 2:
			system("cls");
			printf("Iniciando o Linux...\n");
			break;
			
		default:
			printf("Opcao invalida\n");
	}
	system("pause");
	return 0;
}
