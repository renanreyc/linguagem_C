/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	long int a,  i, j, tam, igual, Instancia=0;
	char painel[300001], aux[300001];

	while(1) {
		scanf("%li", &a);

		if(a == 0) {
			return 0;
		}

		scanf("%s", painel);
		Instancia++;

		sprintf(aux, "%li", a);
		tam = strlen(aux);

		i = 0;

		while(painel[i] != '\0') {
			j = 0;
			if(painel[i] == aux[j]) {
				while(painel[i] == aux[j]) {
					if(painel[i] == aux[j]) {
						igual++;

						if(igual == tam) {
							goto fim;
						}
					}

					i++, j++;
				}

				i--;
			}

			igual = 0;
			i++;
		}

		fim:
		printf("Instancia %li\n", Instancia);

		if(igual == tam) {
			printf("verdadeira\n");
		} else {
			printf("falsa\n");
		}

		printf("\n");
	}

	return 0;
}