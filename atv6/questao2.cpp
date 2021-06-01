#include <stdio.h>
#include <stdlib.h>

/* 
2.	Faça uma função chamada "sum" que soma o conteúdo de todos os índices de um array de inteiros.
	int sum(int array[], int len) { . . . }
*/

int sum(int len, int array[]) {
	int i, aux = array[0];
	
	for (i = 1; i < len; i++) {
			aux = aux + array[i];
	}
	return aux;
}

int main(int argc, char *argv[]) 
{
	int len, array[len], i, somaArray;
	
	printf("Quantos elementos tem seu array: ");
	scanf("%d", &len);
	
	printf("\nDigite o valor de cada indice \n");
	
	for(i = 0; i < len; i++){
		printf("Indice %d: ",i+1);
        scanf("%d", &array[i]);
    }
	
	somaArray = sum(len, array);
	
	printf("%d",somaArray);
	
	return 0;
}
