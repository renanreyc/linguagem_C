#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
3.a Informar se a subtração de dois números é negativa
**tem que adicionar a biblioteca <stdbool.h> para funcionar os booleanos
*/
int numA;
int numB;
int result;


int main(int argc, char *argv[]) {
	printf("\nDigite o numero A: \n");
	scanf("%d", &numA);
	
	printf("\nDigite o numero B: \n");
	scanf("%d",&numB);
	
	if(numA - numB < 0){
		printf("\nA subtracao de A com B eh negativa\n");
	}else{
		printf("\nA subtracao de A com B nao e negativa\n");
	} 
	
	system("pause");
	return 0;
}
