#include <stdio.h>
#include <stdlib.h>

/* 
 3.	Escreva uma função que receba 5 notas de um aluno e uma letra. Se a letra
 for A a função retorna a média aritmética das notas do aluno, se for P, a sua
 média ponderada  (pesos:  5,  3  e 2)  e se for  H, a sua  média harmônica.
*/

float calculaMedia(float n1, float n2, float n3, float n4, float n5, char tipo) {
	float media;
	
	if (tipo == 'A') {
		media = (n1 + n2 + n3 + n4 + n5) / 5;
	} else if (tipo == 'P') {
		media = (n1*5 + n2*5 + n3*3 + n4*2 + n5*2)/17;
	} else if (tipo == 'H') {
		media = 5 / (1/n1 + 1/n2 + 1/n3 + 1/n4 + 1/n5);
	}
	
	return media;
}

int main(int argc, char *argv[]) 
{
	float nota1, nota2, nota3, nota4, nota5, calc;
	char tipo;
	
	printf("Digite o tipo de media (arit.-A, ponder.-P, harmo.-H): \n");
	scanf("%c", &tipo);
	
	printf("Digite as 5 notas do aluno: \n");
	scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);
	
	calc = calculaMedia(nota1, nota2, nota3, nota4, nota5, tipo);
	
	printf("Media = %f", calc);
	
	
	return 0;
}
