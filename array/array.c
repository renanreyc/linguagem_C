#include <stdio.h>
#include <stdlib.h>

/*
	Professor Jos� de Assis
	Curso B�sico de Linguagem C
	Aula 10 - Array (simples e multidimensional)
*/


int main(int argc, char *argv[]) {
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	//exibindo o conte�do da vari�vel nota3 sem uso do array
	printf("Sem array\n");
	printf("Nota3: %.1f\n", nota3);
	//a linha abaixo cria um array de tamanho 4
	float notas[4]={8,6,9,3};
	printf("Com array\n");
	printf("Nota3: %.1f\n",notas[2]);
	//a linha abaixo modifica o conte�do de um array
	notas[1]=7;
	printf("Modificando o conteudo do array\n");
	printf("Nota3: %.1f\n",notas[1]);
	//a linha abaixo cria um array de duas dimens�es conforme boletim do aluno
	float boletim[2][4]={{8,7,9,3},{4,5,8,6}};
	//recuperando a nota de portugu�s do 1 bimestre
	printf("Array multidimensional\n");
	printf("Nota: %.1f\n",boletim[1][0]);
	system("pause");
	return 0;
}
