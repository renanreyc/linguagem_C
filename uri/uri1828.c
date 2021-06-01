/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include<string.h>

int main() {
  int i, inteiro;
  char escolha1[10], escolha2[10];
  scanf("%d",&inteiro);
  
  for(i=1;i<=inteiro;i++){
    scanf("%s %s",&escolha1, &escolha2);
      //!strcmp - Compara o conteúdo de duas strings em C;
      if(!strcmp(escolha1, escolha2)){
        printf("Caso #%d: De novo!\n",i);
        
      }else if(!strcmp(escolha1,"pedra")){
        if(!strcmp(escolha2,"tesoura") || !strcmp(escolha2,"lagarto")){
          printf("Caso #%d: Bazinga!\n",i);
        }else if(!strcmp(escolha2, "Spock") || !strcmp(escolha2, "papel")){
          printf("Caso #%d: Raj trapaceou!\n",i);
        }
      }else if(!strcmp(escolha1, "papel")){
        if(!strcmp(escolha2, "Spock") || !strcmp(escolha2, "pedra")){
          printf("Caso #%d: Bazinga!\n",i);
        }else if(!strcmp(escolha2, "lagarto") || !strcmp(escolha2, "tesoura")){
          printf("Caso #%d: Raj trapaceou!\n",i);
        }
      }else if(!strcmp(escolha1, "tesoura")){
        if(!strcmp(escolha2, "lagarto") || !strcmp(escolha2, "papel")){
          printf("Caso #%d: Bazinga!\n",i);
        }else if(!strcmp(escolha2, "Spock") || !strcmp(escolha2, "pedra")){
          printf("Caso #%d: Raj trapaceou!\n",i);
        }
      }else if(!strcmp(escolha1, "lagarto")){
        if(!strcmp(escolha2, "Spock") || !strcmp(escolha2, "papel")){
          printf("Caso #%d: Bazinga!\n",i);
        }else if(!strcmp(escolha2, "tesoura") || !strcmp(escolha2, "pedra")){
          printf("Caso #%d: Raj trapaceou!\n",i);
        }
      }else if(!strcmp(escolha1, "Spock")){
        if(!strcmp(escolha2, "tesoura") || !strcmp(escolha2, "pedra")){
          printf("Caso #%d: Bazinga!\n",i);
        }else if(!strcmp(escolha2, "lagarto") || !strcmp(escolha2, "papel")){
          printf("Caso #%d: Raj trapaceou!\n",i);
        }
      } 
  }
    return 0;
}
  