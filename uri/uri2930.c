/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main(void) {
  int E, D;

  scanf("%d %d",&E,&D);
  if(E > D){
    printf("Eu odeio a professora!\n");
  } else if((D - E) >= 3){
    printf("Muito bem! Apresenta antes do Natal!\n");
  } else if ((E + 2) < 24) {
        printf("Parece o trabalho do meu filho!\nTCC Apresentado!\n");
  } else {
        printf("Parece o trabalho do meu filho!\nFail! Entao eh nataaaaal!\n");
    }
  return 0;
}