#include <stdio.h>
#include <stdlib.h>

/* 
1.	Elabore um programa que crie 3 arquivos, no primeiro salve uma sequência de números 
inteiros de [0 a 100], no segundo arquivo de [200 a 300] e no último arquivo uma sequência
de [500 a 1000]. Obs. Escolham os nomes que desejarem para os arquivos.
*/

char* cont_0a100(){
  int aux;
  int contador;

  FILE *p1;

  p1 = fopen("Arquivo_0_a_100.txt", "w");

  if(p1 == NULL){
    return "Erro na criação do arquivo";
  }
  else{
    for(aux=0; aux<=100; aux++)
    fprintf(p1,"%d\n",aux);

    fclose(p1);
    return "Arquivo_0_a_100.txt criado com sucesso!!";
  }
}

char* cont_200a300(){
  int aux;
  int contador;

  FILE *p2;

  p2 = fopen("Arquivo_200_a_300.txt", "w");

  if(p2 == NULL){
    return "Erro na criação do arquivo";
  }
  else{
    for(aux=200; aux<=300; aux++)
    fprintf(p2,"%d\n",aux);

    fclose(p2);
    return "Arquivo_200_a_300.txt criado com sucesso!!";
  }
}

char* cont_500a100(){
  int aux;
  int contador;

  FILE *p3;

  p3 = fopen("Arquivo_500_a_1000.txt", "w");

  if(p3 == NULL){
    return "Erro na criação do arquivo";
  }
  else{
    for(aux=500; aux<=1000; aux++)
    fprintf(p3,"%d\n",aux);

    fclose(p3);
    return "Arquivo_500_a_1000.txt criado com sucesso!!!";
  }
}

int main()
{
  printf("%s\n", cont_0a100());
  printf("%s\n", cont_200a300());
  printf("%s\n", cont_500a100());
  return 0;
}


