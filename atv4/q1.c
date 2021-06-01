#include <stdio.h>
#include <stdlib.h>

/* Questão 1*/

int a;

int main(int argc, char *argv[]) {
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &a);
	
	if (a % 3 == 0){
		printf("\nSim, o valor eh multiplo de 3\n");
	}else{
		printf("\nNao, o valor nao eh multiplo de 3\n");
	}
	system("pause");
	return 0;
}

