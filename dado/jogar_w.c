#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Professor José de Assis
	Curso básico de linguagem C
	Aula 9 -  Jogo do dado
*/

int main(int argc, char *argv[]) 
{
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face: %d\n", rand()%6);
	system("pause");
	return 0;
}
