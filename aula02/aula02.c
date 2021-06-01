#include <stdio.h>
#include <stdlib.h>

/* Variável do tipo char */

int main(int argc, char *argv[])
{
	char nome[50];
	printf("Digite o seu nome: ");
	gets(nome);
	system("cls");
	printf("Bem vindo %s\n",nome);
	system("pause");
	return 0;
}
