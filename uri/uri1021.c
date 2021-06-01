/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main(void) {
  double valor,moeda;
  int nota,cent,cem,ciquenta,vinte,dez,cinco,dois
      ,um,zCinquenta,zVinte5,zDez,zCinco,zUm;

  scanf("%lf", &valor);
  printf("NOTAS:\n");

  nota = valor;
  cem = nota / 100;
  ciquenta = (nota%100)/50;
  vinte = ((nota%100)%50)/20;
  dez = (((nota%100)%50)%20)/10;
  cinco = ((((nota%100)%50)%20)%10)/5;
  dois = (((((nota%100)%50)%20)%10)%5)/2;
  um = ((((((nota%100)%50)%20)%10)%5)%2);

  printf("%d nota(s) de R$ 100.00\n", cem);
  printf("%d nota(s) de R$ 50.00\n",ciquenta);
  printf("%d nota(s) de R$ 20.00\n",vinte);
  printf("%d nota(s) de R$ 10.00\n",dez);
  printf("%d nota(s) de R$ 5.00\n",cinco);
  printf("%d nota(s) de R$ 2.00\n",dois);
  

  printf("MOEDAS:\n");

  moeda = valor*100;
  cent = (int) moeda;

  zCinquenta = (cent%100)/50;
  zVinte5 = ((cent%100)%50)/25;
  zDez = (((cent%100)%50)%25)/10;
  zCinco = ((((cent%100)%50)%25)%10)/5;
  zUm = (((((cent%100)%50)%25)%10)%5);

  printf("%d moeda(s) de R$ 1.00\n",um);
  printf("%d moeda(s) de R$ 0.50\n", zCinquenta);
  printf("%d moeda(s) de R$ 0.25\n",zVinte5);
  printf("%d moeda(s) de R$ 0.10\n",zDez);
  printf("%d moeda(s) de R$ 0.05\n",zCinco);
  printf("%d moeda(s) de R$ 0.01\n",zUm);
    
  return 0;
}