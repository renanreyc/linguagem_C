/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char L[500];
  //int tamanho;
  scanf("%[^\n\r]", L);
  //tamanho = strlen(L);
  //printf("%d\n",tamanho);
  if(strlen(L)<=80){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}