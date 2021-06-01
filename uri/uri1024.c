/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void criptografia (char frase[], int tam){
  int i;
  char aux;

  for (i = 0; i < tam; i++){
    if(isalpha(frase[i])){
      frase[i] +=3;
    }
  }

  for(i = 0; i < tam/2; i++){
    if(i != (tam-1-i)){
      aux = frase[i];
      frase[i] = frase[tam-2-i];
      frase[tam-2-i] = aux;
    }
  }

  for(i = (tam-1)/2; i <tam;i++){
    frase[i]--;
  }

  for(i = 0; i < tam-1;i++){
    fprintf(stdout,"%c",frase[i]);
  }
}

int main(void) {
  int i, num_casos;
  char frase[1101], test;

  fscanf(stdin, "%d", &num_casos);
  fscanf(stdin, "%c",&test);

  for(i = 0; i < num_casos; i++){
    fgets(frase, 1100,stdin);
    criptografia(frase, strlen(frase));
    fprintf(stdout, "\n");
  }

  return 0;
}