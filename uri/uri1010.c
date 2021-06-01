/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main() {
  int id1, id2, qtd1, qtd2;
  double v1,v2, valor;

  scanf("%d %d %lf", &id1, &qtd1, &v1);
  scanf("%d %d %lf", &id2, &qtd2, &v2);

  valor = (v1 * qtd1) + (v2 * qtd2);

   printf("VALOR A PAGAR: R$ %.2lf\n", valor);
  
    return 0;
}