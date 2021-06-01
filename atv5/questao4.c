#include <stdio.h>
#include <stdlib.h>

/* 
	4.Escreva uma fun��o que recebe, por par�metro, dois valores X e Z e calcula e retorna X elevado a Z.
	(sem utilizar fun��es ou operadores de POT�NCIA prontos).
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
	
	printf("Digite o valor da pot�ncia Z positivo: \n");
	scanf("%d", &valorZ);
	
	calc = calculaPotencia(valorX,valorZ);
	
	printf("X elevado a Z = %d", calc);
	
	
	return 0;
}
