#include <stdio.h>
#include <stdlib.h>

/*
Curso báscio de Linguagem C
aula 12 - função
*/

void teste(void); //tenho que declarar a função antes do main

int main(int argc, char *argv[]) 
{
	printf("Exemplo de funcao\n\n");
	teste();
	teste();
	printf("Fim\n");
	system("pause");
	return 0;
}

void teste(void)
{
	printf("Renan Rey\n");
}
