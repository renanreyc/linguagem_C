#include <stdio.h>
#include <stdlib.h>

int numOne, numTwo, numThree;

int main(int argc, char *argv[]) {
	printf("Digite o numero um:\n");
	scanf("%d", &numOne);
	printf("Digite o numero dois:\n");
	scanf("%d", &numTwo);
	printf("Digite o numero tres:\n");
	scanf("%d", &numThree);
	
	printf("O ultimo numero ao primeiro sao: %d, %d, %d\n",numThree, numTwo, numOne);
	system("pause");
	return 0;
}
