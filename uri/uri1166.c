/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <math.h>

int k,nvaretas,bolas;
int varetas[51];

void max(int numBola, int posicao){

  if(posicao == nvaretas){
    return;
  }
  if(varetas[posicao] == 0){
    varetas[posicao] = numBola;
    bolas++;
    return max(numBola+1,posicao);
    
  }
  for(k = 0;k <= posicao;k++){
    int raiz = (int) sqrt(varetas[k]+numBola);
    if(pow(raiz, 2) == varetas[k] + numBola){
      varetas[k] = numBola;
      bolas++;
      return max(numBola+1,posicao);
    }
  }
  max(numBola,posicao + 1);
}

int main() {
  int teste, i, j;
  scanf("%d",&teste);

  for(i = 1; i <= teste;i++){
    scanf("%d", &nvaretas);
    for(j = 0;j < 50; j++){
        varetas[j] = 0;
    }
    bolas = 0;
    max(1,0);
    printf("%d\n",bolas);
  }
  return 0;
}