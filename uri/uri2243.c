/*
 * Autor: Renan Rey
 * Data: maio/2021
 */
 
#include <stdio.h>
#include <stdlib.h>

int verificacao(const int *coluna,int ind,int tam, int direcao){
  if(tam == 1){
    return 1;
  }else if (coluna[ind] >= tam){
    return verificacao(coluna,ind + direcao,tam - 1, direcao);
  }else{
    return 0;
  }
  
}

int triangulo(const int *coluna,int ind, int tam){
  if(coluna[ind] >= tam) {
      return verificacao(coluna,ind - 1, tam - 1, -1)&& verificacao(coluna,ind + 1,tam - 1, 1);
  }else{
    return 0;
  }
}

int main() {
int max = 50000;
int coluna[max], n, i, j, maiorColuna,auxMaiorColuna;

scanf("%d",&n);

for(i = 0; i < n; i++){
  scanf("%d",coluna + i);
}
maiorColuna = 1;
auxMaiorColuna = 1;

for(i = 2; i <= n; i++){
  for (j = i-1;j <= n-i; j++){
    if(triangulo(coluna, j, i)){
      auxMaiorColuna = i;
      break;
    }
  }

  if(maiorColuna == auxMaiorColuna){
    break;
  }
  maiorColuna = auxMaiorColuna;
}
  printf("%d\n",maiorColuna);  
  return 0;
}

