// as linhas abaixo "chamam" as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* comentário em bloco */
// comentário em linha

int main(int argc, char *argv[]) 
{
	//a linha abaixo configura o idioma para o português
	setlocale(LC_ALL,"Portuguese");
	//a linha abaixo muda a cor do texto
	system("color 5E");
	printf("Olá mundo \n");
	system("pause");
	// a linha abaixo limpa a tela
	system("cls");
	system("color F0");
	printf("Renan Rey Costa Rodrigues\n");
	system("pause");
	return 0;
}
