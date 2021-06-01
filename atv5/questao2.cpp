#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
 2.	A geometria Euclidiana baseia-se nas relações entre pontos, retas e planos. Nesse sentido,
 escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). Os 
 valores de retorno devem ser do tipo float. 
*/

float calculaDistancia(int x1, int y1, int x2, int y2) {
	return sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

int main(int argc, char *argv[]) 
{
	int x1,y1, x2,y2;
	float distancia;
	
	printf("Informe as coordenadas do ponto 1: ");
	scanf("%d %d", &x1,&y1);
	
	printf("Informe as coordenadas do ponto 2: ");
	scanf("%d %d", &x2,&y2);

	distancia = calculaDistancia(x1,y1,x2,y2);
	
	printf("Distancia: %f",distancia);
	return 0;
}
