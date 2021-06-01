#include <stdio.h>
#include <stdlib.h>

/* 
1.	Implemente uma função de busca binária em um array de inteiros. A função deve receber um 
array de inteiros como parâmetro e o elemento que se deseja buscar, o retorno deve ser o indice 
no qual o elemento se encontra, caso não encontre o elemento o retorno da função será o valor -1. 
*/

int indiceProcurado(int numProcurado, int vet[10]) {
	int i, aux = -1;
	
	for (i = 0; i < 10; i++) {
		if (vet[i] == numProcurado) {
			aux = i;
		}
	}
	
	return aux;
}

int main(int argc, char *argv[]) 
{
	int vet[10] = {1, 2, 8, 0, 5, 7, 10, 13, 3, 6}, numProcurado, indice;
	
	printf("Digite o numero inteiro que se deseja buscar: ");
	scanf("%d", &numProcurado);
	
	indice = indiceProcurado(numProcurado, vet);
	
	if (indice == -1){
		printf("Elemento nao encontrado");
	}else{
		printf("Indice do elemento encontrado: %d",indice);
	}
	
	return 0;
}
