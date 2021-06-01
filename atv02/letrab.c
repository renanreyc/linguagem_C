#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
3.B Verificar se o resultado da equação seguinte é maior ou menor que 100
Equação: 3x _ 4y + 5*(x-y)).
**tem que adicionar a biblioteca <stdbool.h> para funcionar os booleanos
*/
int x;
int y;
int resp;


int main(int argc, char *argv[]) {
	printf("\nDigite o valor de X: \n");
	scanf("%d", &x);
	
	printf("\nDigite o valor de Y: \n");
	scanf("%d",&y);
	
	resp = (3 * x) + (4 * y) + (5 * ( x - y ));
	printf("\nResultado da equacao e = %d\n", resp);
	
	if(resp > 100){
		printf("\nO resultado da equacao e maior que 100\n");
	}else{
		printf("\nO resultado da equacao e menor ou igual a 100\n");
	} 
	
	system("pause");
	return (0);
};
