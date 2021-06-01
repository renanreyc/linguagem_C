#include <stdio.h>
#include <stdlib.h>

int a, b, y;

int main(int argc, char *argv[]) {
	printf("Para a equacao y = a*x + b:\n");
	printf("Digite o valor de a:\n");
	scanf("%d", &a);
	printf("Digite o valor de b:\n");
	scanf("%d", &b);
	printf("Equacao: y = %d*x + %d\n",a, b);
	
	system("pause");
	return 0;
}
