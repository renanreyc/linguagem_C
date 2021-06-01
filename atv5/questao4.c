#include <stdio.h>
#include <stdlib.h>

/* 
	4.Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X elevado a Z.
	(sem utilizar funções ou operadores de POTÊNCIA prontos).
*/

float calculaPotencia(int valorX, int valorZ) {
	
	int potencia, contador;
	potencia = 1;
	contador = 0;
  
	while (contador != valorZ) {
    	potencia = potencia * valorX;
    	contador = contador + 1;
    }	
	
	return potencia;
}

int main(int argc, char *argv[]) 
{
	int valorX, valorZ, calc;
	
	printf("Digite o valor de X: \n");
	scanf("%d", &valorX);
	
	printf("Digite o valor da potência Z positivo: \n");
	scanf("%d", &valorZ);
	
	calc = calculaPotencia(valorX,valorZ);
	
	printf("X elevado a Z = %d", calc);
	
	
	return 0;
}
