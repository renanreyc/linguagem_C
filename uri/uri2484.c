/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <string.h>

int main() {
 char palavra[101];
 int tam_palavra;
 int i,j,k;

 while(scanf("%s",palavra)!=EOF){

  tam_palavra=strlen(palavra);
  for(i=0;i<=strlen(palavra)-1;i++){

   for(k=0;k<i;k++){
     printf(" ");
    }
   for(j=0;j<tam_palavra;j++){
    printf("%c",palavra[j]);
    if(j<tam_palavra-1)
    printf(" ");
   }
   tam_palavra--;
   printf("\n");
  }
  printf("\n");
 }
    return 0;
}