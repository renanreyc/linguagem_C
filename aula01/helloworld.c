// as linhas abaixo "chamam" as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* coment�rio em bloco */
// coment�rio em linha

int main(int argc, char *argv[]) 
{
	//a linha abaixo configura o idioma para o portugu�s
	setlocale(LC_ALL,"Portuguese");
	//a linha abaixo muda a cor do texto
	system("color 5E");
	printf("Ol� mundo \n");
	system("pause");
	// a linha abaixo limpa a tela
	system("cls");
	system("color F0");
	printf("Renan Rey Costa Rodrigues\n");
	system("pause");
	return 0;
}
