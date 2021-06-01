/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{int tempo; int pizza;}x;
#define maior(a, b) a > b ? a : b

int main(){
  int Nmax = 21, Pmax = 31, numPedidos, numPizzas, i, j;
  int matriz[Nmax][Pmax];
  x pedido[Nmax];

  while(scanf("%d",&numPedidos) && numPedidos){
    scanf("%d",&numPizzas);
    for(i = 1;i <=numPedidos;i++){
      scanf("%d %d",&pedido[i].tempo, &pedido[i].pizza);
    }

    for(i = 0; i<=numPedidos;i++){
      for(j = 0; j<=numPizzas;j++){
        if(!i || !j){
          matriz[i][j] = 0;
        }else{
          if(pedido[i].pizza > j){
            matriz[i][j] = matriz[i-1][j];
          }else{
            matriz[i][j] = maior(matriz[i-1][j - pedido[i].pizza] + pedido[i].tempo, matriz[i-1][j]);
          }
        }
      }
    }
    printf("%d min.\n",matriz[numPedidos][numPizzas]);
  }

  return 0;
}

  