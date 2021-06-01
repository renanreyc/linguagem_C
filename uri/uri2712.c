/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

 #include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
  int quantidadeDeTestes = 0, tamanhoPlaca;
  char placa[100];
  bool numerosTeste = false,letrasTeste = false;

  scanf("%d", &quantidadeDeTestes);

  while(quantidadeDeTestes--){
    scanf("%s",placa);

    tamanhoPlaca = strlen(placa);
    if(tamanhoPlaca == 8){

      if(placa[0] >= 'A' && placa[0] <= 'Z'){

        if(placa[1] >= 'A' && placa[1] <= 'Z'){

          if(placa[2] >= 'A' && placa[2] <= 'Z'){

            letrasTeste = true;

          }
        }
      }
    }
    if(placa[3] == '-' && letrasTeste == true){

      if(placa[4] >= '0' && placa[4] <= '9'){

        if(placa[5] >= '0' && placa[5] <= '9'){

          if(placa[6] >= '0' && placa[6] <= '9'){

            if(placa[7] >='0' && placa[7] <= '9'){

              numerosTeste = true;

            }
          }
        }
      }
    }
    if(numerosTeste == true){
      switch(placa[tamanhoPlaca - 1]){
        case '1':
        printf("MONDAY\n");
        break;
        case '2':
          printf("MONDAY\n");
          break;
        case '3':
          printf("TUESDAY\n");
          break;
        case '4':
          printf("TUESDAY\n");
          break;
        case '5':
          printf("WEDNESDAY\n");
          break;
        case '6':
          printf("WEDNESDAY\n");
          break;
        case '7':
          printf("THURSDAY\n");
          break;
        case '8':
          printf("THURSDAY\n");
          break;
        case '9':
          printf("FRIDAY\n");
          break;
        case '0':
          printf("FRIDAY\n");
          break;
      }  
    }else{
      printf("FAILURE\n");
    }

  numerosTeste = false, letrasTeste = false;
  }

  return 0;
}