#include <stdio.h>
#include <stdlib.h>

/*
Aula 5
Exemplo da variável do tipo float
Estruturas de decisão
*/

int main(int argc, char *argv[]) 
{
	float nota1,nota2,media;
	printf("Digite a nota1: ");
	scanf("%f", &nota1);
	printf("Digite a nota2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("Media: %.1f\n",media);
	printf("nota1: %.f\n",nota1);
	printf("nota2: %.f\n",nota2);
	system("pause");
	return 0;
}
