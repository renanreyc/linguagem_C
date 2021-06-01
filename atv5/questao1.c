#include <stdio.h>
#include <stdlib.h>

/* 1.	Crie uma função que recebe um inteiro e imprime os seu bits na ordem correta */

#define TAM 16

int main(int argc, char *argv[]) 
{
	int numeroDecimal, binario [TAM], aux;
	
	printf("Digite um numero decimal: ");
	scanf("%d", &numeroDecimal);
	
	for(aux= TAM -1; aux >= 0; aux--){
		binario[aux] = (numeroDecimal % 2)==0 ? 0 : 1;
		numeroDecimal = numeroDecimal /2;
	}
	
	printf("\n");
	for(aux=0; aux < TAM; aux ++){
		printf("%d", binario[aux]);
	}
	
	return 0;
}
