#include <stdio.h>
#include <stdlib.h>

/* 
3.	Elabore um programa que leia um texto digitado no terminal e imprima as
	4 primeiras letras do texto.
*/

int main(int argc, char *argv[]) 
{
	char nome[25];
	
	printf("Digite o nome: ");
	fgets(nome,25,stdin);
		
	for(int i = 0; i < 4; i++){
		printf("%c", nome[i]);
    }

	return 0;
}
