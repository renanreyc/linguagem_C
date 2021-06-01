#include <stdio.h>
#include <stdlib.h>

/* 
Aula 7 - função
*/

void teste(void);

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
