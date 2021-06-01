/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main(void) {
  int horaInicio,horaFinal,minutoInicio,minutoFinal
  ,horaDuracao, minutoDucacao;

  scanf("%d %d %d %d",&horaInicio,&minutoInicio,&horaFinal,&minutoFinal);

  horaDuracao = horaFinal - horaInicio;
  minutoDucacao = minutoFinal - minutoInicio;

  if((horaDuracao <= 0) &&(minutoDucacao <=0)){
    horaDuracao = 24 + horaDuracao;
  }

  if(minutoDucacao < 0){
    minutoDucacao += 60;
    horaDuracao--;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horaDuracao,minutoDucacao);

  return 0;
}