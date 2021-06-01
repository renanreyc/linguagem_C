/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
 
int main() {
  float num,media,total;
  int i, soma_i;

  soma_i = 0;
  total = 0;
 
  for (i=1;i<=6;i++){
    scanf("%f",&num);
    if(num > 0) {
      soma_i +=1;
      total += num;
    }
  }

  media = total / soma_i;

  printf("%d valores positivos\n",soma_i);
  printf("%.1f\n",media);

   return 0;
}