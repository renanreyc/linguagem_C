/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main(void) {
  int valor;
  int nota,cent,cem,ciquenta,vinte,dez,cinco,dois
      ,um;

  scanf("%d", &valor);

  nota = valor;
  cem = nota / 100;
  ciquenta = (nota%100)/50;
  vinte = ((nota%100)%50)/20;
  dez = (((nota%100)%50)%20)/10;
  cinco = ((((nota%100)%50)%20)%10)/5;
  dois = (((((nota%100)%50)%20)%10)%5)/2;
  um = ((((((nota%100)%50)%20)%10)%5)%2);

  printf("%d\n",valor);
  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n",ciquenta);
  printf("%d nota(s) de R$ 20,00\n",vinte);
  printf("%d nota(s) de R$ 10,00\n",dez);
  printf("%d nota(s) de R$ 5,00\n",cinco);
  printf("%d nota(s) de R$ 2,00\n",dois);
  printf("%d nota(s) de R$ 1,00\n",um);
     
  return 0;
}