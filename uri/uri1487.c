/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct brinquedo{
  short tempo;
  short qntPontos;
  double pontoTempo;
}brinquedo;

int compara(brinquedo *a, brinquedo*b){
  if(a->pontoTempo == b->pontoTempo){
    return 0;
  }else if (a->pontoTempo > b->pontoTempo){
    return -1;
  }else{
    return  1;
  }
}

int main() {
  short i, instancia = 0, qntBrinquedo, limite, aux,
        totalPontos,totalTempo;
  
  while(true){
    scanf("%hu %hu", &qntBrinquedo, &limite);

    if(qntBrinquedo == 0){
      break;
    }

    brinquedo brinquedos[qntBrinquedo];
    for(i = 0;i < qntBrinquedo; i++){
      scanf("%hu %hu", &brinquedos[i].tempo, &brinquedos[i].qntPontos);

      brinquedos[i].pontoTempo = (brinquedos[i].qntPontos / (double)brinquedos[i].tempo);
    }
    qsort(brinquedos,qntBrinquedo,sizeof(brinquedo),compara);

    totalPontos = totalTempo = i = 0;

    while(i < qntBrinquedo){
      aux = totalTempo + brinquedos[i].tempo;
      if (aux <= limite){
        totalPontos += brinquedos[i].qntPontos;
        totalTempo = aux;
      }else{
        i++;
      }
    }
    printf("Instancia %hu\n%hu\n\n",++instancia,totalPontos);
  }
  return 0;
}